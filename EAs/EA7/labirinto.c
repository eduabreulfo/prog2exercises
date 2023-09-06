
#include "labirinto.h"

struct Labirinto
{
    int *matriz;
    unsigned qtdColunas;
    unsigned qtdLinhas;
};

Labirinto *labirinto_criar()
{
    Labirinto *labirinto = (Labirinto *)calloc(1, sizeof(Labirinto));

    return labirinto;
}

void labirinto_ler(Labirinto *labirinto)
{
    int aux;
    char letra;

    while(1)
    {
        scanf("%d%c", &aux, &letra);

        if( letra == '\n' );
        {
            labirinto->qtdColunas++;
            break;
        }

        labirinto->qtdColunas++;
    }

    for(int i = 0; i < labirinto->qtdColunas; i++)
    {
        scanf("");
    }
}

void labirinto_destruir(Labirinto *labirinto)
{
    free(labirinto);
}