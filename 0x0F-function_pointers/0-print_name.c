/**
 * print_name - print a name.
 *
 * @name: string.
 * @f: pointer to a function.
 */
void print_name(char *name, void (*f)(char *))
{
  if (name && f)
    f(name);
}
