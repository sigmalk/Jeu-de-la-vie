#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include"header.h"
#define width 100
#define height 80

enum{dead,alive};

int main(){
    char grid[width][height] = {dead};

    while(1){
        system("clear");
        print_grid(&grid[0][0], width, height);
        usleep(10000);
    }

    return 0;
}
