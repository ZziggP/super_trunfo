#include <stdio.h>

int main(){

    int idade = 24; //int armazena valores inteiros

    float altura = 1.80; // float armazena valores com casas decimais

    double peso = 80.50; // double também armazena com casas decimais, porem ele tem mais capacidade para suportar casas decimais

    char letra = 'A'; // armazenas apenas um caracter

    char nome[20] = "Pedro"; // usando o colchetes tem a possibilidade de armazenar determinada quantidade de caracteres

    // printf() usada para saida de dados;
    // printf("texto com formatação", variavel1, variavel2, ...);
    // printf("Öla, Mundo!\n");

    /*
    Para exibir as variaveis é necessario atribuir um formato usando um identificador de formato para cada variavel;

        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
    
    Por exemplo:

        printf("A idade é: %d\n", idade);
    */


    printf("A idade é: %d\n", idade);
    printf("A Altura é: %.2f\n", altura);
    printf("O peso é: %.2f\n", peso);
    printf("A letra é: %c\n", letra);
    printf("Meu nome é: %s\n", nome);


    /*
    Agora vamos pedir um valor de entrada para as variaveis;
    Usando a funcão scanf("%d", &variavel)

    Se faz necessario a utilizacão do caracter & antes da escrita da variavel
    */

    printf("Qual sua idade?");
    scanf("%d", &idade);
    printf("Sua idade então é: %d\n", idade);

}