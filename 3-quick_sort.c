#include "sort.h"

static void swap_ints(int *a, int *b, int *array, size_t size)
{
int tmp;
if (a == b)
return;
tmp = *a;
*a = *b;
*b = tmp;
print_array(array, size);
}

static int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
swap_ints(&array[i], &array[j], array, size);
}
}
i++;
swap_ints(&array[i], &array[high], array, size);
return (i);
}

static void quicksort_rec(int *array, int low, int high, size_t size)
{
int p;
if (low < high)
{
p = lomuto_partition(array, low, high, size);
quicksort_rec(array, low, p - 1, size);
quicksort_rec(array, p + 1, high, size);
}
}

void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quicksort_rec(array, 0, (int)size - 1, size);
}
