#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimentoTorre, movimentoBispo, movimentoRainha;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Quantas casas deseja mover a Torre? ");
    scanf("%d", &movimentoTorre);

    /*
    Operação ternária para verificar se o movimento da Torre é maior que 1
    e imprimir a mensagem correspondente.
    A operação ternária é uma forma concisa de escrever uma condição if-else.
    */
    printf(movimentoTorre > 1 ? "\nTorre se movendo %d casas para a direita!\n" : "Torre se movevendo %d casa para a direita!\n", movimentoTorre);

    printf("\n");

    // Loop para simular a movimentação da Torre
    for (int i = 0; i < movimentoTorre; i++)
    {
        printf("Torre se moveu %d casa para a direita.\n", i + 1);
    }

    printf("\n-------------------------------------------------------------------\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Quantas casas deseja mover o Bispo? ");
    scanf("%d", &movimentoBispo);

    printf(movimentoBispo > 1 ? "\nBispo se movendo %d casas em diagonal!\n" : "Bispo se movendo %d casa em diagonal!\n", movimentoBispo);

    printf("\n");

    // Loop para simular a movimentação do Bispo
    for (int i = 0; i < movimentoBispo; i++)
    {
        printf("Bispo se moveu %d casa em diagonal.\n", i + 1);
    }

    printf("\n-------------------------------------------------------------------\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Quantas casas deseja mover a Rainha? ");
    scanf("%d", &movimentoRainha);

    printf(movimentoRainha > 1 ? "\nRainha se movendo %d casas para a esquerda!\n" : "Rainha se movendo %d casa para a esquerda!\n", movimentoRainha);

    printf("\n");

    int i = 0;
    // Loop do-while para simular a movimentação da Rainha
    do
    {
        printf("Rainha se moveu %d casa para a esquerda.\n", i + 1);
        i++;
    } while (i < movimentoRainha);
    printf("\n-------------------------------------------------------------------\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
