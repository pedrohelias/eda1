#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  
  FILE *pont_arq;   // criando a variável ponteiro direcionada ao arquivo. 
  
  pont_arq = fopen("arquivo.txt", "a"); //pont_arq recebe a abertura de um arquivo. Não temos o arquivo.txt na pasta, então será criado. 

  /*
    O "a" acima siginifica um dos pontos abaixo:

    r: Permissão de abertura somente para leitura. É necessário que o arquivo já esteja presente no disco.

    w: Permissão de abertura para escrita (gravação). Este código cria o arquivo caso ele não exista, e caso o mesmo exista ele recria o arquivo novamente fazendo com que o conteúdo seja perdido. Portanto devemos tomar muito cuidado ao usar esse tipo de abertura.

    a: Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado.    
  
  */
  
  fclose(pont_arq); //todo arquivo aberto deve ser fechado. 
  
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!\n");
  
  return(0);
}

//Para 