#include <stdio.h>
#include <stdlib.h>
#include "team.h"

#define NAME_STR_SIZE 33
#define STATE_STR_SIZE 3

struct team{
  char name[NAME_STR_SIZE];
  char state[STATE_STR_SIZE];
};

Team *team_build(){

  Team *t = (Team*)malloc(sizeof(Team));
  if(t==NULL){
    printf("Faltou memoria para alocar o time!\n");
    exit(1);
  }

  return t;
}

void team_read(Team *t){
  scanf("%s %s", t->name, t->state);
}

void team_show(Team *t){
  printf("%s [%s]", t->name, t->state);
}

void team_destroy(Team *t){
  free(t);
}
