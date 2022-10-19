#include "test_main.h"
#include <stdlib.h>

/**
 * aux - auxiliar recursive function
 * @arg: is an integer
 * Return: index
 */
int aux(int arg)
{
  int i;
  unsigned int number;

  i = 0;
  number = arg;
  if (arg < 0)
    {
      i += _putchar('-');
      number = -number;
    }
  if (number == 0)
    {
      i += _putchar('0');
      return (i);
    }

  if (number / 10)
    i += aux(number /  10);

  i += _putchar(number % 10 + '0');
  return (i);
}


/**
 * print_d - A function that prints a decimal base 10
 * @i: base 10 integer to print
 * Return: number of printed digits
 */
int print_d(va_list i)
{
  int arg = va_arg(i, int);
  int k;

  k = aux(arg);
  return (k);
}
