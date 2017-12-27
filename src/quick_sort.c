#include "sort.h"

int partition(s_data_t *tab, int lower, int upper)
{
  int i;
  int j;
  s_data_t tmp;

  i = lower - 1;
  j = lower - 1;
  tmp = tab[upper];
  while (++j < upper) {
    if (compare(tab[j], tmp) == -1) {
      ++i;
      swap(&tab[i], &tab[j]);
    }
  }
  swap(&tab[i + 1], &tab[upper]);
  return (i + 1);
}

void quick_sort(s_data_t *tab, int lower, int upper)
{
  int part;

  if (lower < upper) {
    part = partition(tab, lower, upper);
    quick_sort(tab, lower, part - 1);
    quick_sort(tab, part + 1, upper);
  }
}
