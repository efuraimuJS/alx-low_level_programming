#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: pointer to first element in search array
 * @size: size of array
 * @value: value to find
 * Return: index where found or -1
 */
int binary_search(int *array, size_t size, int value)
{
    unsigned int i, j, k, l, m;
    int n;

    if (array == NULL)
        return (-1);
    i = 0;
    j = size - 1;
    while (i <= j)
    {
        printf("Searching in array: ");
        for (k = i; k < j; k++)
            printf("%d, ", array[k]);
        printf("%d\n", array[k]);
        m = (i + j) / 2;
        n = array[m];
        if (n < value)
            i = m + 1;
        else if (n > value)
            j = m - 1;
        else
        {
            l = m;
            return (l);
        }
    }
    return (-1);
}
