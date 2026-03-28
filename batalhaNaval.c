#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    // entrada de dados com a matriz "zerada", um vetor char para a linha de caracteres, um vetor inteiro para a coluna de números do 1 até o 10.
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {0};
    // entrada de dados para representar o tamanho do navio e o número de casas que ele irá ocupar dentro da matriz "tabuleiro".
    int tamanho = 3;
    int navio = 3;
    
    // coordenadas do navio em horizontal.
    int linha1 = 3;
    int coluna1 = 6;
        
        for (int i = 0; i < tamanho; i++) 
        {
        tabuleiro[linha1][coluna1 + i] = navio;  
        }
    
    // coordenadas do navio em vertical.
    int linha2 = 6;
    int coluna2 = 1;
        
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro[linha2 + i][coluna2] = navio;
        }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    //coordenadas navio 3 em diagonal. 
    int linha3 = 2;
    int coluna3 = 2;
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro[linha3 + i][coluna3 + i] = navio;
        }

    // coordenadas navio 4 em diagonal oposta.
    int linha4 = 5;
    int coluna4 = 9;
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro[linha4 + i][coluna4 - i] = navio;
        }

        // impressão do tabuleiro com : a linha de caracter unico, a coluna númerada de 1 a 10, e os dois navios representados pelo valor 3 e ocupando 3 casas cada um.
        printf("### TABULEIRO DE BATALHA NAVAL ###\n");
        printf("  ");

        for (int i = 0; i < 10; i++)
        {
            printf("  %c", linha[i]);
        }
    
        printf("\n");
        
        for (int i = 0; i < 10; i++) 
        {
            printf("%2d ", coluna[i]);
            for (int j = 0; j < 10; j++) 
            {
                printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        
        
    
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
