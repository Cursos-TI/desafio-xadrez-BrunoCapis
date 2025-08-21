#include <stdio.h>
/*
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda
*/

int main () {
    int  bispo = 1, torre = 1; // declaração de variaveis

printf ("\n###############################\n");

    while ( bispo <=5 ){     // movimentação do bispo 
        printf ("Bispo anda para diagonal superior direita %d casas\n", bispo);
        bispo ++;
    }

    printf("\n###############################\n");

    
    do {
        printf ("Torre se movimenta %d casas para a direita \n", torre);
        torre ++;
    }while (torre <= 5);

    printf("\n###############################\n");

    for (int rainha = 1 ; rainha <= 8; rainha++) {
        printf ("Rainha se movimenta %d casas para a esquerda\n", rainha);

    }




    return 0;

}

    












