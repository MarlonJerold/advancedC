#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "mapa.c"

MAPA m;

void move(char direcao){
    int x;
    int y;

    for (int i = 0; i < m.linhas; i++){
        for (int j = 0; j < m.colunas; j++){
            if (m.matriz[i][j] == '@'){
                x = i;
                y = j;
                break;
            }     
        }
    }

    switch (direcao){
    case 'a':
        m.matriz[x][y-1] = '@'; 
        break;
    case 'w':
        m.matriz[x-1][y] = '@';
        break;
    case 's':
        m.matriz[x+1][y] = '@';
        break;
    case 'd':
        m.matriz[x][y+1] = '@';
        break;  
    }  

    m.matriz[x][y] = '.';  
    
}
int acabou(){
    return 0;
}
int main(){
    lermapa(&m);

    do {

        imprimirmapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);

    } while (!acabou());
    
    liberamapa(&m);

}
