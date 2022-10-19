#include "main.h"

/**
 * _function - checks if there is a valid format specifier
 * @c: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*_function(char c))(va_list a)
{
int i;
print_t menu[] = {
{"c", print_c},
{"s", print_s},
{"%", print_perc},
{"i", print_i},
{"d", print_d},
{NULL, NULL}
};
for (i = 0; menu[i].all != NULL; i++)
{
if (menu[i].all[0] == c)
{
return (menu[i].f);
}
}
return (NULL);
}
/**
 * _printf -  produces output according to a format
 * @format: input string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
va_list argptr;
int i, count = 0;
int (*g)(va_list);
if (format == NULL)
{
return (-1);
}
va_start(argptr, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
}
else if (format[i] == '%' && format[i + 1] == '\0')
{
return (-1);
}
else if (format[i] == '%' && format[i + 1] != '\0')
{
g = _function(format[i + 1]);
if (g == NULL)
{
_putchar(format[i]);
}
else
{
count = (count + g(argptr)) - 1;
i++;
}
}
count++;
}
va_end(argptr);
return (count);
}
