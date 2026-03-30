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
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0, indicando posições vazias.
    
  // entrada de dados para representar o tamanho do navio e o número de casas que ele irá ocupar dentro da matriz "tabuleiro".
    
    int tamanho = 3;
    int navio = 3;
    
    
    // coordenadas do navio em horizontal.
    int linha1 = 4;
    int coluna1 = 0;
        
        for (int i = 0; i < tamanho; i++) 
        {
        tabuleiro[linha1][coluna1 + i] = navio;  
        }
    
    // coordenadas do navio em vertical.
    int linha2 = 6;
    int coluna2 = 0;
        
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
    int coluna3 = 3;
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro[linha3 + i][coluna3 + i] = navio;
        }

    // coordenadas navio 4 em diagonal oposta.
    int linha4 = 0;
    int coluna4 = 2;
        for (int i = 0; i < tamanho; i++)
        {
            tabuleiro[linha4 + i][coluna4 - i] = navio;
        }
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int cone[5][5] = {
    {0, 0, 0, 0, 0},
    {0, 0, 5, 0, 0},
    {0, 5, 5, 5, 0},
    {5, 5, 5, 5, 5},
    {0, 0, 0, 0, 0}
    };

    //Posição onde o topo do cone será posicionado no tabuleiro
    int coneX = 7; // Linha do tabuleiro
    int coneY = 4; // Coluna do tabuleiro 
    // Preenchimento do tabuleiro com a habilidade em cone
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {   
            // Ajuste para centralizar o cone.   
            int tabuleiroX = coneX + (i - 1); 
            int tabuleiroY = coneY + (j - 3); // O cone é mais largo, então ajustamos a posição horizontalmente.
        
          if (tabuleiroX >= 0 && tabuleiroX < 10 && tabuleiroY >= 0 && tabuleiroY < 10) {
                tabuleiro[tabuleiroX][tabuleiroY] = cone[i][j];
            }
        }
    }


    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int octaedro[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 5, 0, 0},
        {0, 5, 5, 5, 0},
        {0, 0, 5, 0, 0},
        {0, 0, 0, 0, 0}
    };
    
    //Posição onde o centro do octaedro será posicionado no tabuleiro
    int octaedroX = 8; // Linha do tabuleiro
    int octaedroY = 8; // Coluna do tabuleiro 
    // Preenchimento do tabuleiro com a habilidade em octaedro
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {   
            // Ajuste para centralizar o octaedro.   
            int tabuleiroX = octaedroX + (i - 2); 
            int tabuleiroY = octaedroY + (j - 2);
        
          if (tabuleiroX >= 0 && tabuleiroX < 10 && tabuleiroY >= 0 && tabuleiroY < 10) {
                tabuleiro[tabuleiroX][tabuleiroY] = octaedro[i][j];
            }
        }
    }    

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cruz[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 5, 0, 0},
        {5, 5, 5, 5, 5},
        {0, 0, 5, 0, 0},
        {0, 0, 0, 0, 0}
    };
    //Posição onde o centro da cruz será posicionado no tabuleiro
    int cruzX = 1; // Linha do tabuleiro
    int cruzY = 7; // Coluna do tabuleiro 
    // Preenchimento do tabuleiro com a habilidade em cruz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) 
        {   
            // Ajuste para centralizar a cruz.   
            int tabuleiroX = cruzX + (i - 2); 
            int tabuleiroY = cruzY + (j - 2);
        
          if (tabuleiroX >= 0 && tabuleiroX < 10 && tabuleiroY >= 0 && tabuleiroY < 10) {
                tabuleiro[tabuleiroX][tabuleiroY] = cruz[i][j];
            }
        }
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
        

    return 0;
}
