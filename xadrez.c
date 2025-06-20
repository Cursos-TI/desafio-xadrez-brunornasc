#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {    
        // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    const char* CIMA = "Cima";
    const char* BAIXO = "Baixo";
    const char* ESQUERDA = "Esquerda";
    const char* DIREITA = "Direita";
        
    int i;
    
    printf("=== Movimentacao das Pecas de Xadrez ===\n\n");
    
    // 1. Movimentação do Bispo: 5 casas na diagonal superior direita
    // Diagonal superior direita = Cima + Direita
    printf("Bispo movendo 5 casas na diagonal superior direita:\n");
    for(i = 0; i < 5; i++) {
        printf("%s + %s\n", CIMA, DIREITA);
    }
    printf("\n");
    
    // 2. Movimentação da Torre: 5 casas para a direita
    printf("Torre movendo 5 casas para a direita:\n");
    i = 0;
    while(i < 5) {
        printf("%s\n", DIREITA);
        i++;
    }
    printf("\n");
    
    // 3. Movimentação da Rainha: 8 casas para a esquerda
    printf("Rainha movendo 8 casas para a esquerda:\n");
    i = 0;
    do {
        printf("%s\n", ESQUERDA);
        i++;
    } while(i < 8);
    
    return 0;
}