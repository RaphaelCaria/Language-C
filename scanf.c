/*
Sintaxe: scanf(<form.>, &<v1>, &<v2>, ... )
form= especificador de formato
v = variável

ESPECIFICADORES DE FORMATO: scanf()
-- d OU i -> Imprime numeros inteiros em base decimal;
-- x -> Números inteiros com base hexadecimal;
-- f -> Números em ponto flutuante (com casas decimais);
-- e -> Números em notação científica (com casas decimais);
-- c -> Caracteres alfanuméricos (texto);
-- s -> Sequêcia de caracteres alfannuméricos (texto);
-- [^chars] -> Lê todos os dados digitados, exceto os especificados em "chars";

--------------------------------------------------------------------------------------------------------
int main(int argc, char const *argv[])
{
    int idade = 0;
    char nome [20];
        printf("Digite seu nome:");
            scanf("%s", &nome);
        printf("Digite uma idade:");
            scanf("%d", &idade);
                printf("Sua idade e: %d, e seu nome e: %s",idade, nome);
}
-------------------------------------------------------------------------------------------------------

FORMA MAIS SIMPLIFICADA (Não é ideal)

int main(int argc, char const *argv[])
{
    int idade = 0;
    char nome [20];
        printf("Digite seu nome e sua idade:");
            scanf("%s %d", &nome, &idade);
                printf("Sua idade e: %d, e seu nome e: %s",idade, nome);
}

*/