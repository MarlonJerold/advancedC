#include <stdio.h>
#include <stdlib.h>

int tamanho = 6;
char mapa [6][10+1];

int main(){


    FILE* f;
    f = fopen("mapa.txt", "r");

    if (f == 0){
        printf("Error na leitura do mapa");
        exit(1);
    }else{
        printf("arquivo lido com sucesso\n");
    }
    
    for (int i = 0; i < tamanho; i++){
        fscanf(f, "%s", mapa[i]);
    }

    for(int i = 0; i < tamanho; i++){
        printf("%s\n", mapa[i]);
    }

    fclose(f);

}
