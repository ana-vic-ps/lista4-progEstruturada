#include <stdio.h>

/* Elabore um programa em C, que armazene os valores representados pela matriz na figura a seguir. Calcule
a soma dos valores entre a linhas em destaque na figura a seguir e demostre qual é a maior soma entre elas. */

int main()
{

    int matriz[4][4] = {{45, 32, 83, 95}, {26, 14, 37, 42}, {40, 43, 65, 77}, {74, 79, 48, 55}};
    int soma1 = 0, soma2 = 0;

    for (int l = 1; l < 2; l++)
    {
        for (int c = 0; c < 4; c++)

            soma1 += matriz[l][c];
    }

    printf("A soma dos valores em destaque é: %i ", soma1);

    for (int l = 3; l == 3; l++)
    {
        for (int c = 0; c < 4; c++)

            soma2 += matriz[l][c];
    }
    printf("\nA soma dos valores em destaque é: %i ", soma2);

    if (soma1 > soma2)
    {
        printf("\nA maior soma é: %i", soma1);
    }

    else
    {
        printf("\nA maior soma é: %i", soma2);
    }
}