#include <stdio.h>
#include <string.h>
#include "base.h"

//*

int compare(s_data_t t1, s_data_t t2)
{
  if (t1 == t2) {
    return (0);
  }
  else {
    return ((t1 < t2) ? -1 : 1);
  }
}
void print(s_data_t t)
{
  printf("%d\n", t);
}

void swap(s_data_t *t1, s_data_t *t2)
{
  s_data_t tmp;
  
  tmp = *t1;
  *t1 = *t2;
  *t2 = tmp;
}

/*/

int compare(s_data_t t1, s_data_t t2)
{
  if (strcmp(t1.nom, t2.nom) == 0 && strcmp(t2.prenom, t1.prenom) == 0){
    return (0)
  }
  else {
    if (strcmp(t1.nom, t2.nom) == 0) {
      return ((strcmp(t1.prenom, t2.prenom) < 0) ? -1 : 1);
    }
    else {
      return ((strcmp(t1.nom, t2.nom) < 0) ? -1 : 1);
    }
  }
}
void print(s_data_t t)
{
  printf("%s - %s\n", t.nom, t.prenom);
}

void swap(s_data_t *t1, s_data_t *t2)
{
  s_data_t tmp;
  
  tmp = *t1;
  *t1 = *t2;
  *t2 = tmp;
}

//*/
