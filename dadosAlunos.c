#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o seu nome:");
    scanf("%s", nome);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Digite sua matricula:");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Idade do aluno: %d\n", idade);
    printf("Altura do aluno: %.2f\n", altura);
    printf("Matricula do aluno: %d\n", matricula);


    // Outro modo de fazer isso seria com apenas um printf(), juntando todas as informacoes nele;
    // Mesmo ficando redundante vou fazer da outra forma para aprendizado;

    printf("Nome do aluno: %s - Idade do aluno: %d - Altura do aluno: %.2f - Matricula do aluno: %d\n", nome, idade, altura, matricula);








}