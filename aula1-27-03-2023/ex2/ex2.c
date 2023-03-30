#include <stdio.h>

/*
DESCRIÇÃO: Faça um programa que receba um valor inteiro N e imprima
as N linhas do triângulo conhecido como triângulo de Floyd.
*/

int main(){

  int number=1;
  int n_lines=0;
  int line_size=1;
  int i, j;

  scanf("%d", &n_lines);

  for(i=0; i<n_lines; i++){
    printf("%d", number);
    number++;
    for(j=1; j<line_size; j++){
      printf(" %d", number);
      number++;
    }
    printf("\n");
    line_size++;
  }

  return 0;
}