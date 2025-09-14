#include <stdio.h>

int main() {
    // VARIAVEIS PARA CARTA 1
    char estado1; // Nome do estado
    char codigo1[4]; // Ex: "A01"
    char nomecidade1[50]; // Nome da cidade
    int populacao1; // população
    float area1; // area em km²
    float pib1; // pib em bilhões de reais
    int pontosTuristicos1; // numero de pontos turisticos

    //  VARIAVEIS PARA A CARTA 2
    char estado2; // Nome do estado
    char codigo2[4]; // Ex: "B02"
    char nomecidade2[50]; // Nome da cidade
    int populacao2; // população
    float area2; // area em km²
    float pib2; // pib em bilhões de reais
    int pontosTuristicos2; // numero de pontos turisticos

    // INSERINDO DADOS NA CARTA 1
    printf("Cadastro da Carta 1\n"); // Solicita os dados da carta 1

    printf("Estado (A-H):\n "); // Solicita o estado
    scanf(" %c", &estado1); // Lê o estado

    printf("Código da Carta (Ex: A01):\n"); // Solicita o código da carta
    scanf("%s", &codigo1); // Lê o código da carta
 
    printf("Nome da Cidade:\n"); // Solicita o nome da cidade
    scanf("%s", &nomecidade1); // Lê o nome da cidade

    printf("População: \n"); // Solicita a população
    scanf("%d", &populacao1); // Lê a população
 
    printf("Área (em km²):\n"); // Solicita a área em km²
    scanf("%f", &area1); // Lê a área em km²

    printf("PIB (em bilhões de reais):\n"); // Solicita o PIB em bilhões de reais
    scanf("%f", &pib1); // Lê o PIB em bilhões de reais

    printf("Número de Pontos Turísticos:\n"); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // INSERINDO DADOS NA CARTA 2
    printf("Cadastro da Carta 2:\n"); // Solicita os dados da carta 2

    printf("Estado (A-H):\n"); // Solicita o estado
    scanf(" %c", &estado2); // Lê o estado

    printf("Código da Carta (Ex: B02):\n"); // Solicita o código da carta
    scanf("%s", &codigo2); // Lê o código da carta

    printf("Nome da Cidade:\n"); // Solicita o nome da cidade
    scanf("%s", &nomecidade2); // Lê o nome da cidade

    printf("População:\n"); // Solicita a população
    scanf("%d", &populacao2); // Lê a população

    printf("Área (em km²):\n"); // Solicita a área em km²
    scanf("%f", &area2); // Lê a área em km²

    printf("PIB (em bilhões de reais):\n"); // Solicita o PIB em bilhões de reais
    scanf("%f", &pib2); // Lê o PIB em bilhões de reais

    printf("Número de Pontos Turísticos:\n"); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos

    // EXIBINDO DADOS CADASTRADOS
    printf("\n--- Dados das Cartas ---\n"); // Exibe os dados cadastrados

    printf("\nCarta 1\n"); // EXIGE OS DADOS DA CARTA 1
    printf("Estado: %c\n", estado1); // Exibe o estado
    printf("Código: %s\n", codigo1); // Exibe o código
    printf("Nome da Cidade: %s\n", nomecidade1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", area1); // Exibe a área em km²
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB em bilhões de reais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos
    
    printf("\nCarta 2\n"); // EXIGE OS DADOS DA CARTA 2
    
    printf("Nome da Cidade: %s\n", nomecidade2); // Exibe o nome da cidade   
    printf("População: %d\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n", area2); // Exibe a área em km²
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB em bilhões de reais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos

    return 0; // Finaliza o programa
}
