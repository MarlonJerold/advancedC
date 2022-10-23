#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void liberamapa(MAPA* m){
    for (int i = 0; i < m->linhas; i++){
        free(m->matriz[i]);
    }
    free(m->matriz);
}
void lermapa(MAPA* m){
    FILE* f;
    f = fopen("mapa.txt", "r");

    if (f == 0){
        printf("Error na leitura do mapa");
        exit(1);
    }
    
    fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

    alocamapa(m);

    for (int i = 0; i < 5; i++){
        fscanf(f, "%s", m->matriz[i]);
    }
    fclose(f);
}
void alocamapa(MAPA* m){
    m->matriz = malloc(sizeof(char*) * m->linhas);
    for (int i = 0; i < (*m).linhas; i++){
        m->matriz[i] = malloc(sizeof(char) * (m->colunas + 1));
    }
}
void imprimirmapa(MAPA* m){
    for(int i = 0; i < 5; i++){
        printf("%s\n", m->matriz[i]);
    }
}