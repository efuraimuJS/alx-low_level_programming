#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 *
 * @array: array.
 * @size: size of array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  if (array && size && action)
    {
      size_t i;

      for (i = 0; i < size; i++)
	action(array[i]);
    }
}
