#pragma once

#define ID_ANO 2
#define ID_MES 1
#define ID_DIA 0

typedef struct{
  unsigned int value[3]; // dd-mm-yyyy
}tData;

tData DataStringParaData(char *data);
int DataDiferencaDias(tData d1, tData d2);
int DataDiferencaMeses(tData d1, tData d2);
int DataDiferencaAnos(tData d1, tData d2);
char *DataNomeMes(tData d);
int DataCompare(tData d1, tData d2);
int DataEhBissexto(tData d);
int DataQtdDiasMes(tData d);
tData DataIncrementarDia(tData d);