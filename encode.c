#include "huffmann.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

char tab[256];

/**
 * @brief
 *
 * @param root
 * @param infile Nom du fichier en entrée
 * @param outfile Nom du ficher de sortie binaire
 */

typedef struct ref
{
    char *caractere;
    char *binary;
} ref;

char *tableau(Node *root, FileContent *file)
{
}

void EncodeFile(FileContent *file, Node *root, const char[] infile, const char[] outfile)
{
    FILE *ptr, *ptr2;
    char c;
    char *res;
    ptr = fopen(infile, "r");
    if (ptr == NULL)
    {
        printf("The file cannot be open");
    }

    do
    { // prend le premier char
        c = fgetc(ptr);
        // transformation en binaire

        // le mettre dans un string

    } while (c != EOF);

    ptr2 = fopen(outfile, "wb");
    if (ptr2 == NULL)
    {
        printf("The file cannot be open");
    }

    fwrite(&res, sizeof(char), 1, ptr2);

    fclose(ptr);
}