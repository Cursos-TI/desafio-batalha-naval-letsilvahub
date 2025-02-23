#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Inicializa o tabuleiro com 0

    // Posiciona um navio verticalmente
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][2] = 1;
    }

    // Posiciona um navio horizontalmente
    for (int i = 0; i < 4; i++) {
        tabuleiro[3][i] = 1;
    }

    // Exibe o tabuleiro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    #include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0

    // Posiciona navios verticalmente e horizontalmente
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][1] = 3; // Navio vertical
        tabuleiro[6][i] = 3; // Navio horizontal
    }

    // Posiciona navios na diagonal
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
        tabuleiro[i][9-i] = 3;
    }

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    #include <stdio.h>

void preencherCone(int tabuleiro[10][10], int x, int y) {
    for (int i = 0; i < 5; i++) {
        for (int j = -i; j <= i; j++) {
            if (x + i < 10 && y + j >= 0 && y + j < 10) {
                tabuleiro[x + i][y + j] = 1;
            }
        }
    }
}

void preencherCruz(int tabuleiro[10][10], int x, int y) {
    for (int i = 0; i < 5; i++) {
        if (x + i < 10) tabuleiro[x + i][y] = 1;
        if (x - i >= 0) tabuleiro[x - i][y] = 1;
        if (y + i < 10) tabuleiro[x][y + i] = 1;
        if (y - i >= 0) tabuleiro[x][y - i] = 1;
    }
}

void preencherOctaedro(int tabuleiro[10][10], int x, int y) {
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            if (x + i < 10 && y + j >= 0 && y + j < 10) {
                tabuleiro[x + i][y + j] = 1;
            }
            if (x - i >= 0 && y + j >= 0 && y + j < 10) {
                tabuleiro[x - i][y + j] = 1;
            }
        }
    }
}

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0

    // Posiciona habilidades especiais
    preencherCone(tabuleiro, 0, 2);
    preencherCruz(tabuleiro, 5, 5);
    preencherOctaedro(tabuleiro, 8, 8);

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
