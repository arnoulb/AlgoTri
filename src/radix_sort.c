#include "sort.h"

s_data_t get_max(s_data_t *tab, int tab_size)
{
  s_data_t ret;
  int i;
  
  ret = tab[0];
  i = 0;
  while (++i < tab_size) {
    if (compare(tab[i], ret) == 1)
      ret = tab[i];
  }
  return (ret);
}

void count_sort(s_data_t *tab, int tab_size, int tmp)
{
  int out[tab_size];
  int i;
  int bucket[10] = {0};

  //  memset(bucket, 0, 10);
  i = -1;
  while (++i < tab_size)
    bucket[(tab[i] / tmp) % 10]++;

  i = 0;
  while (++i < 10)
    bucket[i] += bucket[i - 1];

  i = tab_size;
  while (--i >= 0) {
    out[bucket[(tab[i] / tmp) % 10] -1] = tab[i];
    bucket[(tab[i] / tmp) % 10]--;
  }

  i = -1;
  while (++i < tab_size)
    tab[i] = out[i];
}

void radix_sort(s_data_t *tab, int tab_size)
{
  s_data_t max;
  int tmp;
  
  max = get_max(tab, tab_size);
  tmp = 1;
  while (max / tmp > 0) {
    count_sort(tab, tab_size, tmp);
    tmp *= 10;
  }
}
