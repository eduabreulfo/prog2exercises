/*
Suponha que voce esta desenvolvendo um jogo 2D de tiro
ao alvo e voce deseja verificar se um tiro acertou o alvo.
Assuma que o tiro e o alvo sao circulos e sao conhecidas
suas posicoes e raios.
*/

#include <stdio.h>
#include <math.h>

int ehColisao(float ax, float ay, float aRaio, float bx, float by, float bRaio){

  if(sqrt((pow(2,(bx-ax)) + pow(2,(by-ay)))) < (aRaio + bRaio)){
    return 1;
  }
  return 0;
}

int main(){

  //alvo = ax,ay, aRaio; tiro = tx,ty, tRaio
  float ax, ay, aRaio, tx, ty, tRaio;

  scanf("%f, %f, %f, %f, %f, %f",
    &ax, &ay, &aRaio, &tx, &ty, &tRaio);

  if(ehColisao(ax, ay, aRaio, tx, tx, tRaio)){
    printf("acertou!!\n");
  }
  else printf("errou!!\n");

  return 0;
}