#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE *file; 

    file = fopen("text.txt", "w");
    if(file == NULL){
        printf("There is something wrong in the code. Please, review and run once again");
        return 0;
    }else{

        fprintf(file, "teste 1, 2, 3\n");

    }

    fclose(file);



    return 0;
}