#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada carta
struct Carta {
    char estado[3];        // Estado da cidade (ex: "SP", "TK")
    char codigo[5];        // Código da carta (ex: "A01")
    char nome[50];         // Nome da cidade
    int populacao;         // População
    float area;            // Área em km²
    float pib;             // PIB em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
    double densidade;       // Densidade populacional (População / Área)
    double pibPerCapita;    // PIB per capita (PIB / População)
};

int main() {
    
    // Cadastro das cartas
    
    struct Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.11, 699000000000.0, 20};
    struct Carta carta2 = {"TK", "A02", "Tokyo", 6710000, 1182.30, 360000000000.0, 15};


    // Cálculo da densidade e PIB per capita
    
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    
    // Comparação pelo atributo escolhido
    // Atributo população ->>>
    
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", carta2.nome, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}