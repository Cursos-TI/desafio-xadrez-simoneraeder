#include <stdio.h>

    // Nível Mestre - Movimentação das Peças

    // Movimentação da Torre - Recursiva

void MoverTorre (int casas) {
    if (casas > 0){
        printf("Direita\n");
        MoverTorre (casas -1);
    }
}
 // Movimentação da Bispo - Recursiva

 void MoverBispo (int casas) {
    if (casas > 0){
        printf("Cima, Direita\n");
        MoverBispo (casas -1);
    }
}
 // Movimentação da Rainha - Recursiva

 void MoverRainha (int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        MoverRainha (casas -1);
    }
 }


int main() {


    MoverTorre (5);

    MoverBispo (5);

    MoverRainha (8);

 // Movimentação do Cavalo - Loops Complexos
    
    for (int i = 1; i < 5; i++) {
        if (i == 3) continue; 
        if (i == 5) break;   
        printf("%d, Cima \n", i = 1);
        printf("%d, Cima \n", i = 2);
        printf("%d, Direita \n", i =4);
       
    }



    return 0;
}