#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// DESAFIO FEITO POR JONNY LIMA
#include <stdio.h>

int main() {
    int Tabuleiro[10][10];
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};
    int i, j;
    int linha_inicial_num, coluna_inicial_num;
    char linha_inicial_char;
    char orientacao;
    int valido = 1;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            Tabuleiro[i][j] = 0;
        }
    }

    linha_inicial_char = 'B';
    coluna_inicial_num = 3;
    orientacao = 'H';

    linha_inicial_num = linha_inicial_char - 'A';
    coluna_inicial_num--;

    if (orientacao == 'H') {
        if (coluna_inicial_num > 7) {
            valido = 0;
            printf("Posição inválida: Navio horizontal excede o limite do tabuleiro.\n");
        } else {
            for (j = coluna_inicial_num; j < coluna_inicial_num + 3; j++) {
                Tabuleiro[linha_inicial_num][j] = 3;
            }
        }
    } else if (orientacao == 'V') {
        if (linha_inicial_num > 7) {
            valido = 0;
            printf("Posição inválida: Navio vertical excede o limite do tabuleiro.\n");
        } else {
            for (i = linha_inicial_num; i < linha_inicial_num + 3; i++) {
                Tabuleiro[i][coluna_inicial_num] = 3;
            }
        }
    } else {
        valido = 0;
        printf("Orientação inválida. Use 'H' para horizontal ou 'V' para vertical.\n");
    }

    if (valido) {
        printf("  ");
        for (i = 0; i < 10; i++) {
            printf("%c ", coluna[i]);
        }
        printf("\n");
        for (i = 0; i < 10; i++) {
            printf("%c ", linha[i]);
            for (j = 0; j < 10; j++) {
                printf("%d ", Tabuleiro[i][j]);
            }
            printf("\n");
        }
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
