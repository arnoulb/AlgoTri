#include "sort.h"

void print_tab(s_data_t *tab, int tab_size)
{
  int	i;

  i = -1;
  while(++i < tab_size){
      print(tab[i]);
  }
}
