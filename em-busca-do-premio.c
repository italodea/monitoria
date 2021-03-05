#include<stdio.h>

int main(){
    int simbolosTotais = 2, amigos = 0;
    scanf("%i %i", &simbolosTotais, &amigos);
    int simbolos[simbolosTotais];

    for (int w = 0; w < simbolosTotais; w++){
        simbolos[w] = 0;
    }
    
    for (int x = 0; x < amigos; x++){
        int qtdCartas = 0;
        scanf("%i", &qtdCartas);
        for (int y = 0; y < qtdCartas; y++){
            int carta = 0;
            scanf("%i", &carta);
            if (simbolos[carta] == 0){
                simbolos[carta]++;
            }
        }
    }
    printf("[ ");
    int virgula = 0;
    for(int y = 0; y < simbolosTotais; y++){
        if(simbolos[y] == 0){
            if(virgula == 1){
                printf(", ");
            }
            printf("%i",y);
            virgula = 1;
        }
    }
    if(virgula == 1)
        printf(" ");
    
    printf("]");
}
