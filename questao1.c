#include <stdio.h>

/* Questão 1 - Elabore um programa em C, que armazene os valores representados pela matriz na figura a seguir. Calcule
a média aritmética dos valores armazenados. */

int main()
{

    int matriz[4][4] = {{45, 32, 83, 95}, {26, 14, 37, 42}, {40, 43, 65, 77}, {74, 79, 48, 55}};
    int soma = 0;
    float media;

    for (int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 4; c++)

            soma += matriz[l][c];
    }

    media = soma / 16;

    printf("A soma dos valores armazenados é: %i ", soma);
    printf("\nA média aritmética é: %0.1f ", media);
}