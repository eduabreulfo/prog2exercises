#include <stdio.h>
#include "tData.h"

tData DataStringParaData(char *str){
  tData d;

  int auxDia=0;
  int auxMes=0;
  int auxAno=0;
  
  sscanf("%d%c%d%c%d\n", str);

  if(auxAno >= 1){
    d.value[ID_ANO] = auxAno;
  }
  else d.value[ID_ANO] = 1;

  if(auxMes >= 1){
    d.value[ID_MES] = auxMes;
  }
  else d.value[ID_MES] = 1;

  if(auxDia >= 1 && auxDia <= 28){
    d.value[ID_DIA] = auxDia;
  }
  else if(d.value[ID_MES] != 2 && d.value[ID_DIA] == 29){
    d.value;
  }

  return d;
}

int DataDiferencaDias(tData d1, tData d2){
  ;
}

int DataDiferencaMeses(tData d1, tData d2){
  ;
}

int DataDiferencaAnos(tData d1, tData d2){
  ;
}

char *DataNomeMes(tData d){
  ;
}

int DataCompare(tData d1, tData d2){
  ;
}

int DataEhBissexto(tData d){
  ;
}

int DataQtdDiasMes(tData d){
  ;
}

tData DataIncrementarDia(tData d){
  ;
}