#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[35];
    
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite a opcao");
    scanf(" %c", &opcao);
    printf("a opcao é: %c", opcao);



} 