#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
 
    int i = 1;

    printf("Vamos jogar Xadrez!!!\n");
    printf("Torre começa...\n");

do {
    printf("Digite um número para jogar... 1 a 5 \n");
    scanf("%d", &i);
    if (i >= 3)
    {
        printf("%d Direita\n", i );
    }
    else {
        printf("%d Cima\n", i);
    }
   
} while (i <= 4);

// Mover o Bispo 

printf("Jogada do Bispo!!\n");

for (int i = 0; i < 5; i++) {
    printf("Cima Direita\n");
   }

   
// Mover a Rainha

printf("Jogada da Rainha!!\n");

   for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0) {
        printf("%d Cima Esquerda\n", i);
    }
    else{
        printf("%d Baixo\n", i);
    }
}

    
    return 0;
}
