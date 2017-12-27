#ifndef _SORT_H__
#define _SORT_H__

#include <string.h>
#include "base.h"

void print_tab(s_data_t tab[], int tab_size);
void bubble_sort(s_data_t tab[], int tab_size);
void bubble_sort_rec(s_data_t tab[], int tab_size);
void insertion_sort(s_data_t tab[], int tab_size);
void insertion_sort_rec(s_data_t tab[], int tab_size);
void selection_sort(s_data_t tab[], int tab_size);
void heap_sort(s_data_t tab[ ], int tab_size);
void quick_sort(s_data_t tab[], int lower, int upper);
void radix_sort(s_data_t tab[], int tab_size);
#endif // sort.h
