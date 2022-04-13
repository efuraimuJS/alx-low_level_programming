#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function of calc.
 *
 * @argc: arguments count.
 * @argv: arguments.
 *
 * Return: 0 on surccess.
 */
int main(int argc, char *argv[])
{
  int a, b;

  if (argc != 4)
    {
      printf("Error\n");
      exit(98);
    }

  a = atoi(argv[1]);
  b = atoi(argv[3]);

  printf("%d\n", get_op_func(argv[2])(a, b));

  return (0);
}
