#include "main.h"
#include <unistd.h>

/**
 * print_s - A function that prints a string
 * @s: string to print
 * Return: i
 */
int print_s(va_list s)
{
  int i;
  char *ptr = va_arg(s, char *);
  char *ptrNULL = "(null)";

  if (ptr == NULL)
    {
      for (i = 0; ptrNULL[i] != '\0'; i++)
	{
	  _putchar(ptrNULL[i]);
	}
    }
  else
    {
      for (i = 0; ptr[i] != '\0'; i++)
	{
	  _putchar(ptr[i]);
	}
}
return (i);
}
