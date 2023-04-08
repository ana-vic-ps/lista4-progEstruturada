#include <stdio.h>

/* Questão 3 - Elabore um programa em C, que armazene os valores representados pela matriz na figura a seguir. Calcule
a multiplicação dos valores dos números em destaque na figura a seguir. */

int main()
{

    int matriz[4][4] = {{45, 32, 83, 95}, {26, 14, 37, 42}, {40, 43, 65, 77}, {74, 79, 48, 55}};

    int multiplicacao = 0;

    multiplicacao = matriz[0][1] * matriz[1][1] * matriz[2][1] * matriz[3][1];

    printf("A multiplicação dos valores em destaque é: %i ", multiplicacao);
}