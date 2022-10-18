#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_all - prints anything
 * @all: arguments
 * @func: pointer to the functions that prints all
 */
typedef struct print_all
{
  char all;
  void (*func)(va_list arguments);
}print_t; 

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
#endif
