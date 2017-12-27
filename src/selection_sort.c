#include "sort.h"

void selection_sort(s_data_t *tab, int tab_size)
{
  int i;
  int j;
  s_data_t min;

  i = -1;
  while (++i < tab_size) {
    min = i;
    j = i;
    while (++j < tab_size) {
      if (compare(tab[j], tab[min]) == -1) {
	min = j;
      }
    }
    swap(&tab[min], &tab[i]);
  }
}
