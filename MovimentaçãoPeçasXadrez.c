
#include <stdio.h>

int main() {
    // ==============================
    // Simulação do movimento da TORRE
    // Estrutura usada: FOR
    // ==============================
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // ==============================
    // Simulação do movimento do BISPO
    // Estrutura usada: WHILE
    // ==============================
    printf("\n=== Movimento do Bispo ===\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita %d\n", j);
        j++;
    }

    // ==============================
    // Simulação do movimento da RAINHA
    // Estrutura usada: DO-WHILE
    // ==============================
    printf("\n=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
