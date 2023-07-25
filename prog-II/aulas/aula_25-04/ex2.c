/*
Exercício: faça uma função que receba um livro como entrada e preencha suas informações alterando diretamente na memória.
O livro possui título, autor, edição e número de páginas
Strings têm no máximo 100 caracteres
*/

#include <stdio.h>
#include <string.h>

#define STRING_MAX_SIZE 100

typedef struct {
    char titulo[STRING_MAX_SIZE];
    char autor[STRING_MAX_SIZE];
    int edicao;
    int paginas;
} tLivro;

void livro_print(tLivro *livro){
    printf("TITULO: %s\n", livro->titulo);
    printf("AUTOR: %s\n", livro->autor);
    printf("EDICAO: %d\n", livro->edicao);
    printf("QTD DE PAGINAS: %d\n", livro->paginas);
    printf("=-=-=-=-=\n");
}

void livro_criar(tLivro *livro, char titulo[], char autor[], int edicao, int paginas){
    strcpy(livro->titulo, titulo);
    strcpy(livro->autor, autor);
    livro->edicao = edicao;
    livro->paginas = paginas;
}

int main()
{
    tLivro livro;

    livro_criar(&livro, "AS AVENTURAS DE EDUARDO", "EDUARDO ABREU", 1, 352);
    livro_print(&livro);

    return 0;
}