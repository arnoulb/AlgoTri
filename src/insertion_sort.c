#include "sort.h"

void insertion_sort(s_data_t *tab, int tab_size)
{
  int i;
  int j;
  s_data_t tmp;

  i = 0;
  while (++i < tab_size){
    tmp = tab[i];
    j = i -1;
    while (j >= 0 && compare(tab[j], tmp) == 1) {
      tab[j + 1] = tab[j];
      --j;
    }
    tab[j + 1] = tmp;
  }
}

void insertion_sort_rec(s_data_t *tab, int tab_size)
{
  int last;
  int i;
  
  if (tab_size <= 1)
    return ;
  insertion_sort_rec(tab, tab_size - 1);
  i = tab_size - 1;
  last = tab[i];
  while (--i >= 0 && compare(tab[i], last) == 1) {
    tab[i + 1] = tab[i];
  }
  tab[i + 1] = last;
}
