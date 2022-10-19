#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print_all - prints anything
 * @all: arguments
 * @f: pointer to the functions that prints all
 */
typedef struct print_all
{
char *all;
int (*f)(va_list x);
} print_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_perc(va_list list);
int print_d(va_list i);
int print_i(va_list i);
#endif
