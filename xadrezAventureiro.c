#include <stdio.h>


int main() {
    // Nível Aventureiro - Movimentação das Peças


// formato em L com loops aninhados - Jogada do cavalo


int i, j;

for (i = 4; i <= 11; i++)
{
    for ( j = 1; j <= 5; j++)
    {
    printf("%d",i,j );
    
    }
    printf("\n");
}

// Jogada do Cavalo

int MovimentoCompleto = 1; // Flag para contolar o movimento em L.

while (MovimentoCompleto--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Baixo\n");
    }
    printf("Esquerda\n");


}


    return 0;
}