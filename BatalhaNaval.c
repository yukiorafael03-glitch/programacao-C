#include <stdio.h>

// Constantes para o tamanho do tabuleiro e navios
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função para inicializar o tabuleiro com água
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para verificar se uma posição é válida no tabuleiro
int posicaoValida(int linha, int coluna) {
    return (linha >= 0 && linha < TAMANHO_TABULEIRO && 
            coluna >= 0 && coluna < TAMANHO_TABULEIRO);
}

// Função para verificar se é possível posicionar um navio horizontalmente
int podePosicionarHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                           int linha, int coluna) {
    // Verifica se todas as posições necessárias estão dentro do tabuleiro
    if (!posicaoValida(linha, coluna) || !posicaoValida(linha, coluna + TAMANHO_NAVIO - 1)) {
        return 0;
    }
    
    // Verifica se todas as posições estão livres na água

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != AGUA) {
            return 0;
        }
    }
    
    return 1;
}

// Função para verificar se é possível posicionar um navio verticalmente
int podePosicionarVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                         int linha, int coluna) {
    // Verifica se todas as posições necessárias estão dentro do tabuleiro
    if (!posicaoValida(linha, coluna) || !posicaoValida(linha + TAMANHO_NAVIO - 1, coluna)) {
        return 0;
    }
    
    // Verifica se todas as posições estão livres (água)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != AGUA) {
            return 0;
        }
    }
    
    return 1;
}

// Função para posicionar um navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                              int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = NAVIO;
    }
}

// Função para posicionar um navio verticalmente
void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                            int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = NAVIO;
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    
    // Imprime números das colunas
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%2d ", j);
    }
    printf("\n");
    
    // Imprime linhas separadoras
    printf("   ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("---");
    }
    printf("\n");
    
    // Imprime o tabuleiro com números das linhas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d|", i); // Número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Declaração do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Coordenadas dos navios (definidas diretamente no código)
    int linhaNavioHorizontal = 3, colunaNavioHorizontal = 4;  // Navio horizontal
    int linhaNavioVertical = 7, colunaNavioVertical = 8;      // Navio vertical
    
    printf("=== POSICIONAMENTO DE NAVIOS - BATALHA NAVAL ===\n");
    
    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);
    printf("Tabuleiro inicializado com agua (0).\n");
    
    // Posiciona o navio horizontal
    if (podePosicionarHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal)) {
        posicionarNavioHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal);
        printf("Navio horizontal posicionado em [%d,%d] a [%d,%d]\n", 
               linhaNavioHorizontal, colunaNavioHorizontal,
               linhaNavioHorizontal, colunaNavioHorizontal + TAMANHO_NAVIO - 1);
    } else {
        printf("ERRO: Nao foi possivel posicionar o navio horizontal em [%d,%d]\n", 
               linhaNavioHorizontal, colunaNavioHorizontal);
        return 1; // Encerra o programa com erro
    }
    
    // Posiciona o navio vertical
    if (podePosicionarVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical)) {
        posicionarNavioVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical);
        printf("Navio vertical posicionado em [%d,%d] a [%d,%d]\n", 
               linhaNavioVertical, colunaNavioVertical,
               linhaNavioVertical + TAMANHO_NAVIO - 1, colunaNavioVertical);
    } else {
        printf("ERRO: Nao foi possivel posicionar o navio vertical em [%d,%d]\n", 
               linhaNavioVertical, colunaNavioVertical);
        return 1; // Encerra o programa com erro
    }
    
    // Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);
    
    // Legenda
    printf("\nLEGENDA:\n");
    printf("0 - Agua\n");
    printf("3 - Navio\n");
    
    return 0;
}