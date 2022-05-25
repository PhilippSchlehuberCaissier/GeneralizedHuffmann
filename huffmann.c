//
// Created by Corentin Lebarilier on 5/25/22.
//

#include "huffmann.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    ReadFile(argv[1]);
    return 0;
}

FileContent* ReadFile(const char *filename){
    FileContent *f = malloc(sizeof(filename));

    char c;
    FILE *file = fopen(filename,"r");

    if (file == NULL){
        fprintf(stderr,"Impossible d'ouvrir le fichier données en lecture\n");
        exit(1);
    }
    else{
        while((c = fgetc(file)) != EOF){
            f[c].pos = c;
            printf("%d : \n", f[c].pos);
            char tab[c] = c;
            for(int i = 0; tab[i] != EOF; ++i)
            {
                if(tab[i] == c)
                    f[c].occ++;
            }
        }
    }
    fclose(file);
    return f;
}

