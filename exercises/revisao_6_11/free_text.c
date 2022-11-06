#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    FILE *file;
    char texto[500];

    file = fopen("freeText.txt", "r");

    if(file == NULL){
        printf("There is something wrong in the code. Please, review and run once again");
        return 0;
    }else{
        while(fgets(texto, 500, file) != NULL ){
            printf("%s", texto);
        }
        printf("\n");
    }

    fclose(file);


    return 0;
}