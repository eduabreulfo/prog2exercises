/*
Exercício: modifique o programa anterior para que o valor de x seja alterando dentro da função
*/

#include <stdio.h>

void modificaValor(int *v){
    *v *= 10;
}

int main() {
    int x = 10;
    printf("X: %d\n", x);
    modificaValor(&x);
    printf("X: %d\n", x);
    return 0;
}
