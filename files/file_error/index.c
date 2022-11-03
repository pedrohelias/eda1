#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *pont_arq; // cria variável ponteiro para o arquivo
    char palavra[20]; // variável do tipo string
  
    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("arquivo_palavra.txt", "a");
    
    //testando se o arquivo foi realmente criado
    if(pont_arq == NULL) //se receber algo que seja nulo. Se o arquivo nao for escrito com nada. 
    {
       printf("Erro na abertura do arquivo!");
       return 1;
    } //este é um ponto importante, é necessário checar se oa arquivo foi aberto ou não, se a operação de abertura foi concluida. E sabemos disso se a variável está preenchida ou não. 

    printf("O arquivo foi criado com sucesso!\n");
    
    return(0);
}