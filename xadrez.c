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


    // Definição das constantes de movimento
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    int i; // Variável de controle para as repetições

    printf("--- Simulação de Movimentos de Xadrez ---\n\n");

    // 1. Movimentação da Torre (Usando o laço FOR)
    // A Torre se move 5 casas para a DIREITA.
    printf("Movimento da Torre:\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimentação do Bispo (Usando o laço WHILE)
    // O Bispo se move 5 casas para CIMA e DIREITA (diagonal).
    printf("Movimento do Bispo:\n");
    i = 1; // Reiniciando o contador
    while (i <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // 3. Movimentação da Rainha (Usando o laço DO-WHILE)
    // A Rainha se move 8 casas para a ESQUERDA.
    printf("Movimento da Rainha:\n");
    i = 1; // Reiniciando o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOVIMENTO_RAINHA);
    printf("\n");


    return 0;
}
