#include "sort.h"

void bubble_sort(s_data_t *tab, int tab_size)
{
  int flag;
  int i;

  flag = 1;
  while (flag){
    i = 0;
    flag = 0;
    while (++i < tab_size){
      if (compare(tab[i], tab[i - 1]) == -1) {
	flag = 1;
	swap(&tab[i], &tab[i - 1]);
      }
    }
  }
}

void bubble_sort_rec(s_data_t *tab, int tab_size)
{
  int i;
  
  if (tab_size == 1)
    return ;
  i = 0;
  while (++i < tab_size) {
    if (compare(tab[i], tab[i - 1]) == -1)
      swap(&tab[i], &tab[i - 1]);
  }
  bubble_sort_rec(tab, tab_size - 1);
}
