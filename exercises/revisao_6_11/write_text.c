#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *file;
    char letra;

    file = fopen("writeText.c", "w");

    if(file == NULL){
        printf("There is something wrong in the code. Please, review and run once again");
        return 0;

    }else{
        printf("Digite um texto e pressione enter! \n");
        scanf("%c", &letra);

        while(letra != "\n"){
            fputc(letra, file);
            scanf("%c", &letra);
        }
    
    
    }

    fclose(file);

    return 0;
}