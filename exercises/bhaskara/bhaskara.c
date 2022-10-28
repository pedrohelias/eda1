#include <stdio.h>
#include<stdlib.h>
#include <math.h>

float delta(float a, float b, float c)
{
    float delta = sqrt(pow(b,2) - 4 * a * c);
    return delta;

}


int main()
{
    float a = 1;
    float b = 8;
    float c = -9;

    float result = delta(a, b, c);
    printf("%.2f\n", result);

    float firstRoot = (-b + result)/(2*a);
    float secondRoot = (-b - result)/(2*a);

    int roots[] = {firstRoot,secondRoot};

    printf("%.2f\n", firstRoot);
    printf("%.2f\n", secondRoot);
    
    int size = sizeof(roots)/sizeof *roots; //determinar o tamanho do vetor

    //duas formas para apresentar a saida, dessa vez com analise interna de vetor

    for(int i = 0; i<size; i++){
        printf("%d\n", roots[i]);
    }


    return 0;
}

//para rodar esse exemplo, compilar utilizando a flag -lm além das demais. 
//gcc bhaskara.c -o bhaskara -lm
