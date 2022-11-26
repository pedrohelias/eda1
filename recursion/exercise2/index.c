#include <stdio.h>
#include <stdlib.h>

int tamString(char *string){
    if(*string == '\0'){
        return 0;
    }else{
        return 1 + tamString(string + 1);
    }
}



int main(){
    char string1[] = "teste";
    //scanf("%s", string1);
    int tamanho = tamString(string1);
    printf("tamanho = %d\n", tamanho);

    return 0;
}