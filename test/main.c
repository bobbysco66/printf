#include <limits.h>
#include <stdio.h>
#include "test_main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  _printf("Let's try to printf a simple sentence.\n");
  printf("Let's try to printf a simple sentence.\n");
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  _printf("Percent:[%%]\n");
  printf("Percent:[%%]\n");
  _printf("Length:[%d, %i]\n", 4, 22);
  printf("Length:[%d, %i]\n", 4, 22);
  _printf("Negative:[%d]\n", -762534);
  printf("Negative:[%d]\n", -762534);
  return (0);
}
