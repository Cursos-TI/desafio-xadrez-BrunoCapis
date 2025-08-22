#include <stdio.h>
/*
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda
*/

int main () {



    int  bispo = 1, torre = 1; // declaração de variaveis

printf ("\n###############################\n");

printf("\nMovimentação do Bispo\n");

    while ( bispo <=5 ){     // movimentação do bispo 
        printf ("Diagonal Superior Direita\n");
        bispo ++;
    }

    printf("\n###############################\n");

    printf("\nMovimentação da Torre \n");

    do {
        printf ("Direita\n");
        torre ++;
    }while (torre <= 5);

    printf("\n###############################\n");

    for (int rainha = 1 ; rainha <= 8; rainha++) {
        printf ("Esquerda\n");

    }

    printf("\n###############################\n");

    printf ("\n Movimentação do Cavalo\n");
    
    int movimentocavalo = 1;
    
while (movimentocavalo --)  
    {
        for (int i =0 ; i <=  1 ; i++) {
            printf ("Baixo \n", i);
        }
            printf ("Esquerda\n");
}





    return 0;
}






    












