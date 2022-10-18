#include "main.h"

/**
 * _format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*_format(const char *format))(va_list)
{
int i;
// Created a menu of the different possible conversion specifiers
print_t menu[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
};
// This code will select the specifier that matches with the user input
//Returns an int
for (i = 0; menu[i].all != NULL; i++)
{
if(*(menu[i].t) == *format)
{
break;
}
}
return (menu[i].f);
}


/**
 * _printf -  produces output according to a format
 * @format: input string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
va_list argptr;
unsigned  int i, count = 0;
if (format == NULL)
{
return (-1);
}
va_start(argptr, format);
while( *format != '\0' )
{
  if (format[i] != '%')
    {
      _putchar(format[i]);
      counter++;
      i++;
    }
  else
    {
      if (format[i + 1] == '%')
	{
	  _putchar('%');
	  counter++;
	  i += 2;
	  continue;
	}
      else
	{
	  f = _format(&format[i + 1]);
	  if (f == NULL)
	    {
	      return (-1);
	    }
	  i += 2;
	  counter += f(argptr);
	  continue;
	}

    }
  i++;
}
va_end(argptr);
return (counter);
}
