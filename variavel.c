/*
                         VARIÁVEIS
 Sintaxe de declaração:
    <tipo> <nome>;

---REGRA DE NOMECLATURA---
-> Não pode número na 1ª posição;
-> Não pode caracteres eseciais;
-> Não pode espaço;

-> Pode ter letras;
-> Pode ter UNDERLINE _;
-> Pode ter números desde que não esteja na primeira casa da variavel: ex1, ex_1, (1ex);

---TIPOS DE DADOS EM LINGUAGEM C---

--char -> Carrega texto;
--int -> Carrega numeros;
--float -> Carrega números reais (números com casas decimais);
--double -> Carrega números reais com casas decimais com uma maior precisão;

---ATRIBUIÇÃO DE CONTEÚDO A VARIÁVEIS---

-> Operador= (O que está à direita é  atribuído á variável que está à esquerda do operador);

Sintaxe:
    <variável> = <informação>;

---CONSTANTES---
Diretiva #define: cria-se um identificador para um dado de qualquer tipo;
    Mesmas regras de nomenclatura de variáveis;

Sintaxe:
    #define <nome> <valor>
*/

#include <stdio.h>

#define texto "Entrada e saida de dados."

int main(int argc, char const *argv[])
{
    printf("%s \n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("Digite seu nome: \n");
    scanf("%s", nome);  // Não é necessário usar o operador de endereço (&) para ler uma string

    printf("Digite a altura: \n");
    scanf("%f", &altura);  // Usar %f para ler um número de ponto flutuante

    printf("Dados informados:\n");
    printf("Idade: %d. \n", idade);
    printf("Nome: %s. \n", nome);
    printf("Altura: %.2f. \n", altura);

    return 0;
}

