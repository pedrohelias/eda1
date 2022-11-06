#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *file;
    int a, b, c;
    char nome[20];
    float media;

    file = fopen("text2.txt", "r");

    if(file == NULL){
        printf("There is something wrong in the code. Please, review and run once again\n");
        return 0;
    }

    fscanf(file, " %s %d %d %d", nome, &a ,&b, &c);

    media = (a + b + c)/3;

    printf("a média do aluno %s é relacionada a 3 notas, a = %d, b = %d e c = %d, e é igual a %.2lf\n", nome, a, b, c, media);

    fclose(file);

    return 0;



}