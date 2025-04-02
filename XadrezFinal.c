#include <stdio.h>

void recursividadeT(int t, int vertical, int horizontal){
    if(t > 0){
        if(horizontal == 1){
            printf("Direita, ");
        } else if (horizontal == 2){
            printf("Esquerda, ");
        } else if (vertical == 1){
            printf("Cima, ");
        } else if (vertical == 2){
            printf("Baixo, ");
        } 
        recursividadeT(t - 1, vertical, horizontal);
    }
}

void aninhado(int b, int vertical, int horizontal){
    for(int c = 1; c <= b; c++){
        int l = 1; 
        if (vertical == 1){
            printf("Cima, ");
        } else if (vertical == 2){
            printf("Baixo, ");
        } while (l <= 1){
            if (horizontal == 1){
                printf("Direita, ");
            } else if (horizontal == 2){
                printf("Esquerda, ");
            }
            l++;   
        }
    }
}
void cavalo(int orientacao, int vertical, int horizontal){
    int l = 1;
    int l2 = 1;
                
    for(int c = 1; c < 2 && orientacao; c++){       
        if (horizontal == 1){
            printf("Direita, ");
        } else if (horizontal == 2){
            printf("Esquerda, ");
        } while (l <= 2){
            if (vertical == 1){
                printf("Cima, ");
            } else if (vertical == 2){
                printf("Baixo, ");
            }
            l++;   
        }   
    }
    for(int c2 = 1; c2 < 2 && orientacao == 0; c2++){        // caso o movimento do cavalo vá se repetir duas vezes na horizontal
        if (vertical == 1){
            printf("Cima, ");
        } else if (vertical == 2){
            printf("Baixo, ");
        } while (l2 <= 2){
            if (horizontal == 1){
                printf("Direita, ");
            } else if (horizontal == 2){
                printf("Esquerda, ");
            }
            l2++;   
        }
    }
}
int main(){
    int torre = 5;
    int torrev = 0;
    int torreh = 2;
    int bispo = 4;
    int bispov = 1;
    int bispoh = 2;
    int rainha = 3;
    int rainhav = 1;
    int rainhah = 0;
    int OrientacaoV = 1;
    int cavalov = 1;
    int cavaloh = 1;

    printf("### SIMULADOR DE MOVIMENTO ###\n\n");
    printf("Movimento da TORRE\n");
    recursividadeT(torre, torrev, torreh);
    printf("\n");

    printf("### SIMULADOR DE MOVIMENTO ###\n\n");
    printf("Movimento da BISPO\n");
    aninhado(bispo, bispov, bispoh);
    printf("\n"); 

    printf("### SIMULADOR DE MOVIMENTO ###\n\n");
    printf("Movimento da RAINHA\n");
    if (rainhav == 0 || rainhah == 0){
        recursividadeT(rainha, rainhav, rainhah);               // caso o movimento não seja diagonal iremos usar apenas a função recursiva
    } else{
        aninhado(rainha, rainhav, rainhah);
    }
    printf("\n");

    printf("### SIMULADOR DE MOVIMENTO ###\n\n");
    printf("Movimento da CAVALO\n");
    cavalo(OrientacaoV, cavalov, cavaloh);
    printf("\n");

    return 0;
}