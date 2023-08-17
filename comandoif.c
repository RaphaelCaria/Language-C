/*
--------------ESTRUTURA DE DECISÃO SIMPLES-----------------
Comando if: se a condição é verdadeira, o bloco é executado, senão, é ignorado;

Sintaxe:
    if(<condição>){
        <bloco_de_comandos>
    }

Condições lógico-relacionais;
    -Operadores relacionais:
        ->Maior: >;
        ->Maior igual: >=;
        ->Menor+ <;
        ->Menor igual: <=;
        ->Igual: ==;
        ->Diferente: !=;

#include <stdio.h>

int main()
{
    float m;

    printf("insira ua nota: \n");
    scanf("%f", &m);

    if(m >=7.0){
        printf("Aprovado(a)!\n");
    }

    return 0;
}
-----------------------------------------------------------------------------------------------

    -Operadores lógicos:
        ->Conjunção("e" lógico): &&; 
            -> É verdade quando tudo for verdade;
        ->Disjunção("ou" lógico): ||;
            -> É verdade se ao menos 1 for verdade;
        ->Inversão(negação-"não lógico"): !;
            -> É verdade quando o operando é falso

#include <stdio.h>

int main()
{
    float m;

    printf("insira ua nota: \n");
    scanf("%f", &m);
    //if(4.0<= m < 7.0); --> NÃO EXISTE EM LINGUAGEM DE PROGRAMAÇÃO;
    if(m >=4.0 && m < 7.0 ){
        printf("Tem direito a exame! \n");
    }

    return 0;
}
*/

