#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int num) {
    if (num <= 0) {
        return;
    }
    printf("Torre se moveu para a direita\n");
    moverTorre(num - 1); // Chamando a função para a próxima casa
}

// Função recursiva para mover a Rainha
void moverRainha(int num) {
    if (num <= 0) {
        return;
    }
    printf("Rainha se moveu para a esquerda\n");
    moverRainha(num - 1); // Chamando a função para a próxima casa
}

// Função para movimentar o Bispo com loops alinhados
void moverBispo(int linhas, int colunas) {
    printf("\nMovimentos do Bispo:\n");
    for (int i = 1; i <= linhas; i++) { // Loop externo para o movimento vertical
        printf("Bispo se moveu verticalmente %d casas \n",i );
        for (int j = 1; j <= colunas; j++) { // Loop interno para o movimento horizontal
            printf("  Bispo se moveu horizontalmente \n");
        }
    }
}

// Função para simular o movimento do Cavalo em "L"
void moverCavalo(int movimentos) {
    printf("\nMovimentos do Cavalo:\n");
    for (int i = 1; i <= movimentos; i++) { // Número de movimentos
        for (int j = 1; j <= 2; j++) { // Representa o "L" (duas direções)
            if (j == 1) {
                printf("Cavalo pulou 2 casas para cima\n");
            } else {
                printf("Cavalo pulou 1 casa para a direita\n");
            }
        }
        printf("Cavalo completou o movimento em L\n");
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorre(5); // Movendo a Torre 5 vezes

    printf("\nMovimentos da Rainha:\n");
    moverRainha(8); // Movendo a Rainha 8 vezes

    moverBispo(4, 3); // Movendo o Bispo 4 casas verticalmente e 3 casas horizontalmente

    moverCavalo(3); // Movendo o Cavalo 3 vezes em "L"

    return 0;
}
