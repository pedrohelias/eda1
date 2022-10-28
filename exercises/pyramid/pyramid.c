#include <stdio.h>

int main()
{
    int counter1, cycles, calculo, parada = 0;

    printf("Put a number that represents the amount of cycles\n");
    scanf("%d", &cycles);

    for (int i = 1; i <= cycles; i++)
    {
        calculo = 1 + 2 * counter1;

        for (int j = 1; j <= calculo; j++)
        {
            printf("*");
        }

        counter1++;
        printf("\n");
    }

    return 0;
}