#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // VARIAVEIS COM VALORES DECLARADOS COM QUANTIDADES DE CASAS DE CADA PECA //
    int  bispo = 0, rainha = 0;


    // LOOP EM FOR PARA REPETIR A PALAVRA DIREITA 5 VEZES //
    printf("Movimento da torre e : 5 casas a direita...\n");
     for (int i=0; i < 5; i++) { // O LOOP SERA REPITIDO ATE QUE A VARIAVEL I SEJA IGUAL A VARIAVEL TORRE //
        printf("Direita...\n");
     }

         printf("\n"); // PRINTF COM UM \N PARA SEPARAR OS MOVIMENTOS DAS PECAS //
            // LOOP EM WHILE PARA REPETIR AS PAVALRAS PARA SIMULAR O MOVIMENTO DO BISPO EM DIAGONAL //
      printf("O Movimento do Bipo e : 5 casas na Diagonal...\n");
       while (bispo < 4){ // O LOOP SE TERMINA DEPOIS DE REPETIR 4 VEZES AS PALAVRA PARA QUE ASSIM DE A QUANTIDADE DO CASAS NA DIAGONAL//
        printf("Cima...\nDireita...\n");
        bispo++; // INCREMENTO NA VARIAVEL DO BISPO PARA QUE O LOOP NAO FIQUE INFINITO //
       }


       printf("\n");
       printf("O Movimento da rainha e : 8 casas para a Esquerda...\n");
        do {
           printf("Esquerda...\n");
           rainha++; 
        } while (rainha < 8);

    
    return 0;
}
