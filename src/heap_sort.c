#include "sort.h"

void heapify(s_data_t *tab, int tab_size, int i)
{
  int left;
  int right;
  int largest;

  largest = i;
  left = 2 * i + 1;
  right = 2 * i + 2;
  if (left < tab_size && compare(tab[left], tab[largest]) == 1) {
    largest = left;
  }
  if (right < tab_size && compare(tab[right], tab[largest]) == 1) {
    largest = right;
  }
  if (largest != i) {
    swap(&tab[i], &tab[largest]);
    heapify(tab, tab_size, largest);
  }
}

void heap_sort(s_data_t *tab, int tab_size)
{
  int i;

  i = tab_size / 2;
  while (--i >= 0) {
    heapify(tab, tab_size, i);
  }
  i = tab_size;
  while (--i >= 0) {
    swap(&tab[0], &tab[i]);
    heapify(tab, i, 0);
  }
}
