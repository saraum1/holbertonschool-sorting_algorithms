#include "sort.h"
/**
 * selection_sort - sorts an array of ints in ascending order using Selection sort
 * @array: pointer to array
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_i;
int tmp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min_i = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_i])
min_i = j;
}
if (min_i != i)
{
tmp = array[i];
array[i] = array[min_i];
array[min_i] = tmp;
print_array(array, size);
}
}
}
