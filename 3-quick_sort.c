#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
static void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * lomuto_partition - Order a subset of an array using Lomuto partition.
 * @array: The array of integers.
 * @low: The starting index of the subset.
 * @high: The ending index of the subset.
 * @size: The size of the array.
 *
 * Return: The final partition index.
 */
static int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low, j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}

if (array[i] > pivot)
{
swap_ints(&array[i], &array[high]);
print_array(array, size);
}

return (i);
}

/**
 * quick_sort_rec - Recursive Quick sort using Lomuto partition scheme.
 * @array: Array of integers.
 * @low: Starting index.
 * @high: Ending index.
 * @size: Size of the array.
 */
static void quick_sort_rec(int *array, int low, int high, size_t size)
{
int pivot;

if (low < high)
{
pivot = lomuto_partition(array, low, high, size);
quick_sort_rec(array, low, pivot - 1, size);
quick_sort_rec(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - Sort an array of integers in ascending order.
 * @array: The array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_rec(array, 0, size - 1, size);
}
