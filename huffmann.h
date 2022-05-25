#include <stdio.h>
#include <stddef.h>

typedef struct Node {
    struct Node *child[3];
    // Node *parent;
    char value;
} Node;

typedef struct FileContent {
    Node node; // A leaf node
    unsigned pos; // The position of the ascii in the table
    unsigned occ; // How often it appeared in the text
    char *code; // Code of this char
} FileContent;

// This functions reads the content of a file and counts how often each
// character appears
// It has to be sorted with respect to occ, except that characters
// that do not appear are skipped
// The field pos is needed for encoding. We need to have
// 'a' == FileContentArray['a'].node.value
// To make things simple, filecontent is always a table of size 256

FileContent* ReadFile(const char filename[]);


// Creates the (generalized) Huffmann tree from a filecontent
Node* CreateTree(FileContent* filecontent);

// Uses the Huffmann tree and the filecontent to encode a file
void EncodeFile(Node *root, FileContent* filecontent,
                const char infile[], const char outfile[]);

// The inverse function
void DecodeFile(Node *root, FileContent* filecontent,
                const char infile[], const char outfile[]);
