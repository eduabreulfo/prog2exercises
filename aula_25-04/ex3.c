/*Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne um ponteiro. 
Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor. 
Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. 
Ao final, crie uma função principal que leia um valor n e chame a função criada acima. Depois, a função principal deve ler os n elementos desse vetor. Então, a função principal deve chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a memória alocada através da função criada para liberação.
*/

#include <stdio.h>

int *vector_create(int size){
    int *ivp;

    ivp = (int *) malloc(size * sizeof(int));

    return ivp;
}

vector_print(){
    int i;

    for(i=0; i<size; i++){
        ;
    }
}

int main(){
    return 0;
}