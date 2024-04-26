#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"header.h"

void print_grid(char *grid, int w, int h){
    for(int i=0;i<w+2;i++){printf("--");}
    printf("\n");
    for(int i=0;i<h;i++){
        printf("| ");
        for(int j=0;j<w;j++){
            if(*(grid + i*h + j)){printf("\033[105m  \033[0m");}
            else{printf("  ");};          
        }
        printf(" |\n");
    }
    for(int i=0;i<w+2;i++){printf("--");}
    printf("\n");
}
