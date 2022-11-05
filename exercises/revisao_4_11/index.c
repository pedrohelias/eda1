#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE *file;
    char ch[20];
    int c;
    int num;
    int number;

    file = fopen("text.txt", "w");

    if(file == NULL){
        printf("The file didn't open, please check this error!");
    }else{
        printf("file was open with sucess!\n");
    }

    printf("write what you want :)\n");
    
    for(int i = 0; i <= 10; i++){

        scanf("%d", &num);
        fprintf(file, "%d\n", num);
        
    }

    


    fclose(file);
    printf("File closed with success!");
    
    


    return 0;
}

