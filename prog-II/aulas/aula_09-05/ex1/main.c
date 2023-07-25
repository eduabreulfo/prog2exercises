
/*
    m f q b
ana 6 4 5 8
antô5 7 5 5
bea 5 6 7 4
*/

/*
#define NUM_DISC 4
#define NUM_ALUN 4

void freeNotas(int **notas) {
    for(int j=0; j<NUM_DISC; j++) {
        free(notas[j]);
    }
    free(notas);
}

int main() {
    int **notas = (int**)malloc(NUM_ALUN*sizeof(int*));

    for(int j=0; j<NUM_DISC; j++) {
        notas[j] = (int*)malloc(NUM_DISC*sizeof(int));
    }

    freeNotas(notas);
    return 0;
}
*/

/*
Adapte o código anterior para alocar e receber via teclado as notas dos alunos que estão na tabela do slide 14
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_DISC 4
#define NUM_ALUN 3

void freeNotas(int **notas) {
    for(int j=0; j<NUM_ALUN; j++) {
        free(notas[j]);
    }
    free(notas);
}

int main() {
    int **notas = (int**)malloc(NUM_DISC*sizeof(int*));

    for(int j=0; j<NUM_DISC; j++) {
        notas[j] = (int*)malloc(NUM_ALUN*sizeof(int));
    }

    printf("Digite as as notas dos %d alunos das %d disciplinas!\n", NUM_ALUN, NUM_DISC);
    for(int i=0; i<NUM_ALUN; i++){
        for(int j=0; j<NUM_DISC; j++){
            scanf("%d", &notas[i][j]);
        }
    }

    // print

    if(notas != NULL){
        for(int i=0; i<NUM_ALUN; i++){
            for(int j=0; j<NUM_DISC; j++){
                printf("%d", notas[i][j]);
            }
            printf("\n");
        }
    }

    freeNotas(notas);
    return 0;
}