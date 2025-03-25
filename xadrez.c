#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

void moverBispo(int casasb){
    if(casasb > 0) {
        printf("Diagonal direita para cima\n");
        moverBispo(casasb -1);
    }
}

void moverRainha(int casasr){
    if(casasr > 0) {
        printf("Direita\n");
        moverRainha(casasr -1);
    }
}

int main(){
     
    printf("## Torre ##\n"); //movimento da torre com uso do recursivo.
    moverTorre(5);

    printf("\n");
    printf("## Bispo ##\n"); //movimento do bispo com uso do recursivo.
    moverBispo(5);

    printf("\n");
    printf("## Rainha ##\n"); //movimento da Rainha com uso do recursivo.
    moverRainha(8);


    int movimentoCompleto = 1;

    
            //Movimento cavalo
            printf("\n");
            printf("## Cavalo ##\n");

            while(movimentoCompleto--)
            {
                for(int i = 0; i < 2; i++){
                    printf("Cima\n"); //Imprime "Cima" duas vezes
                }
                printf("Direita\n"); //Imprime "Direita" uma vez

            }




    


    return 0;
}Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
