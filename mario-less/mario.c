#include <cs50.h>
#include <stdio.h>

int main(void){

    int height = get_int("How many blocks: ");
    while (height < 1 || height > 8){
        height = get_int("How many blocks: ");
    }

    for(int i = 0; i<height; i++){
        for(int k = 1; k<height - i; k++){
            printf(" ");
        }
        for(int j = 0; j<i+1; j++){

            printf("#");

        }
        printf("\n");
    }

}