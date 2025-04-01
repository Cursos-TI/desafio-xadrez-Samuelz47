#include <stdio.h>

int main(){
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int bispoh = 1;
    int bispov = 1;
    int torreh = 1;
    int torrev = 0; 
    int rainhah = 2;                        // mapeando o movimento horizontal
    int rainhav = 0;                        // mapeando o movimento vertical
    

    printf("### SIMULADOR DE MOVIMENTO ###\n\n\n");
    for (int b = 1; b <= bispo; b++){
        
        if(bispov == 1 && bispoh == 1){                             //movimentações do bispo que pode ser apenas diagonal
            printf("Movimento do BISPO\n");
            printf("Cima, Direita\n");
        } else if (bispov == 1 && bispoh == 2){
            printf("Movimento do BISPO\n");
            printf("Cima, Esquerda\n");
        } else if (bispov == 2 && bispoh == 1){
            printf("Movimento do BISPO\n");
            printf("Baixo, Direita\n");
        } else if (bispov == 2 && bispoh == 2){
            printf("Movimento do BISPO\n");
            printf("Baixo, Esquerda\n");
        }
    }
    
    int t = 1;
    do{
        
        if(torrev == 0 && torreh == 1){
            printf("Movimento da TORRE\n");
            printf("Direita\n");
        } else if (torrev == 0 && torreh == 2){
            printf("Movimento da TORRE\n");
            printf("Esquerda\n");
        } else if (torrev == 1 && torreh == 0){
            printf("Movimento da TORRE\n");
            printf("Cima\n");
        } else if (torrev == 2 && torreh == 0){
            printf("Movimento da TORRE\n");
            printf("Baixo\n");
        } 
        t++;
    } while (t <= torre);

    int r = 1;
    while (r <= rainha)
    {   
        if (rainhav == 0 && rainhah == 1){
            printf("Movimento da RAINHA\n");
            printf("Direita\n");
        } else if (rainhav == 0 && rainhah == 2){
            printf("Movimento da RAINHA\n");
            printf("Esquerda\n");
        } else if (rainhav == 1 && rainhah == 0){
            printf("Movimento da RAINHA\n");
            printf("Cima\n");
        } else if (rainhav == 2 && rainhah == 0){
            printf("Movimento da RAINHA\n");
            printf("Baixo\n");
        } else if (rainhav == 1 && rainhah == 1){                          
            printf("Movimento do RAINHA\n");
            printf("Cima, Direita\n");
        } else if (rainhav == 1 && rainhah == 2){
            printf("Movimento do RAINHA\n");
            printf("Cima, Esquerda\n");
        } else if (rainhav == 2 && rainhah == 1){
            printf("Movimento do RAINHA\n");
            printf("Baixo, Direita\n");
        } else if (rainhav == 2 && rainhah == 2){
            printf("Movimento do RAINHA\n");
            printf("Baixo, Esquerda\n");
        }
        r++;
    }
    
    return 0;
}