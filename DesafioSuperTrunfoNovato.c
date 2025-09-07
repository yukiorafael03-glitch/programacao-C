#include <stdio.h>

int main() {
    // VARIAVEIS PARA CARTA 1
    char estado1; 
    char codigo1[4]; // Ex: "A01"
    char nomecidade1[50]; 
    int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;

    //  VARIAVEIS PARA A CARTA 2
    char estado2;
    char codigo2[4]; // Ex: "B02"
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // INSERINDO DADOS NA CARTA 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // INSERINDO DADOS NA CARTA 2
    printf("Cadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (Ex: B02): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // EXIBINDO DADOS CADASTRADOS
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
