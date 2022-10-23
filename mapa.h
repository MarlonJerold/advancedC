struct mapa{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void libermapa(MAPA* m);
void alocamapa(MAPA* m);
void lermapa(MAPA* m);
void imprimirmapa(MAPA* m);

