/*
------------OPERAÇÕES ARITMÉTICAS--------------------
Soma: +;
Subtração: -;
Multiplicação: *;
Divisão: /;
Resto de divisão inteira: %;

OBS: Existe precedência entre operadores!;


#include <stdio.h>

int main()
{
    int A, B, soma, subtr, mult, div;

    printf("Digite o primeiro valor: \n");
        scanf("%d", &A);
    printf("Digita o segundo valor: \n");
        scanf("%d", &B);

    soma = A + B;
    subtr= A - B;
    mult = A * B;
    div = A / B;

    printf("Resultados: \n");
    printf("Soma: %d. \n", soma);
    printf("Subtração: %d. \n", subtr);
    printf("Multiplicação: %d. \n", mult);
    printf("Dvisão: %d. \n", div);
    return 0;
}

------------ATRIBUIÇÕES ARITIMÉTICAS---------------
Operadores de atribuição aritmética;
    ->Incremento em 1 unidade: ++;
    ->Decremento em 1 unidade: --;
    ->Incremento genérico: +=;
    ->Decremento genérico: -=;
    ->Atribuição com multiplicação: *=;
    ->Atribuição com divisão: /=;

int main()
{
    int dado = 10;
    printf("Dado antes do incremento: %d. \n", dado);

    dado++;
    printf("Depois do incremento: %d. \n", dado);

    dado--;
    printf("Depois do decremento: %d. \n", dado);

    dado+= 4;
    printf("Depois do incremento em 4 unidades: %d. \n", dado);

    dado-= 2;
    printf("Depois do decremento em 2 unidades: %d. \n", dado);

    dado*= 10;
    printf("Depois de multiplicar por 10: %d. \n", dado);

    dado/= 10;
    printf("Depois de dividir por 5: %d. \n", dado);

    return 0;
}

*/