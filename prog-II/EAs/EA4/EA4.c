// 09:57

#include <stdio.h>
#include <stdlib.h>
#include "cidade.h"
#include "defesa.h"
#include "missil.h"

int main()
{
    //char entrada[300];

    char entrada;

    Cidade *cidade = NULL;
    Arsenal *arsenal = NULL;
    sistema

    while(1)
    {
        scanf("%s");

        if( entrada == 'F' || entrada == 'f' )
        {
            break;
        }

        else if( entrada == 'C' || entrada == 'c' )
        {
            cidade = cidade_criar();
            cidade_ler(cidade);

            continue;
        }

        else if( entrada == 'D' || entrada == 'd')
        {
            Defesa *defesa = defesa_criar();
            void defesa_ler();


            continue;
        }
    }

    return 0;
}