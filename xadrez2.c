#include <stdio.h>

int main(){
    int bispo = 5;               // variável que recebe o número de casas
    int torre = 5;
    int rainha = 8;
    int bispoh = 1;              // variável que irá controlar posição na horizontal, sendo 1 = direita e 2 = esquerda
    int bispov = 1;              // variável que irá controlar posição na vertical, sendo 1 = cima e 2 = baixo
    int torreh = 1;
    int torrev = 0; 
    int rainhah = 2;                        // mapeando o movimento horizontal
    int rainhav = 0;                        // mapeando o movimento vertical
    int cavaloh = 2;           
    int cavalov = 2;            
    int OrientacaoV = 0 ;      // variável que irá definir se o cavalo irá se mover 2 vezes na vertical ou na horizontal
    int l = 1;                  // variável que irá controlar o loop interno 1
    int l2 = 1;                 // variável que irá controlar o loop interno 2

    

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

    if(OrientacaoV){                    // caso o movimento do cavalo vá se repetir duas vezes na vertical
        for(int c = 1; c < 2; c++){        // calculo para que o movimento horizontal seja repetido apenas uma vez
            if (cavaloh == 1){
                printf("Movimento do CAVALO\n");
                printf("Direita\n");
            } else if (cavaloh == 2){
                printf("Movimento da TORRE\n");
                printf("Esquerda\n");
            } while (l <= 2){
                if (cavalov == 1){
                    printf("Movimento do CAVALO\n");
                    printf("Cima\n");
                } else if (cavalov == 2){
                    printf("Movimento da TORRE\n");
                    printf("Baixo\n");
                }
                l++;   
            }
        }
    }else{
        for(int c2 = 1; c2 < 2; c2++){        // caso o movimento do cavalo vá se repetir duas vezes na horizontal
            if (cavalov == 1){
                printf("Movimento do CAVALO\n");
                printf("Cima\n");
            } else if (cavalov == 2){
                printf("Movimento da CAVALO\n");
                printf("Baixo\n");
            } while (l2 <= 2){
                if (cavaloh == 1){
                    printf("Movimento do CAVALO\n");
                    printf("Direita\n");
                } else if (cavaloh == 2){
                    printf("Movimento da CAVALO\n");
                    printf("Esquerda\n");
                }
                l2++;   
            }
        }
    }
    
    return 0;
}