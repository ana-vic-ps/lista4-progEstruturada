#include <stdio.h>

/* Questão 2 - Elabore um programa em C, que armazene os valores representados pela matriz na figura a seguir. Calcule
a soma dos valores dos números em destaque na figura a seguir.*/

int main()
{

    int matriz[4][4] = {{45, 32, 83, 95}, {26, 14, 37, 42}, {40, 43, 65, 77}, {74, 79, 48, 55}};
    int soma = 0;

    for (int l = 2; l < 3; l++)
    {
        for (int c = 0; c < 4; c++)

            soma += matriz[l][c];
    }

    printf("A soma dos valores em destaque é: %i ", soma);
}