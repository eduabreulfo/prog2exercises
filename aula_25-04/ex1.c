#include <stdio.h>

int modificaValor(int v){
    return v * 10;
}

int main() {
    int x = 10;
    printf("X: %d\n", modificaValor(x));
    printf("X: %d\n", x);
    return 0;
}