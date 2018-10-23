#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0, j = 0;
	char *p = "hello", *l_str = "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";
	char q = 'H';

	i = _printf("Let's try to printf a simple sentence.\n");
	j = printf("Let's try to printf a simple sentence.\n");
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf a %c sentence %s.\n", '4', "complex");
	j = printf("Let's try to printf a %c sentence %s.\n", '4', "complex");
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf a %s sentence %c.\n", "simple", '8');
	j = printf("Let's try to printf a %s sentence %c.\n", "simple", '8');
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Hello Moto %   %");
	j = printf("Hello Moto %   %");
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf a %d sentence.\n", 50);
	j = printf("Let's try to printf a %d sentence.\n", 50);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf a %i sentence.\n", 50);
	j = printf("Let's try to printf a %i sentence.\n", 50);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf a %i \"\' sentence.\n", 50);
	j = printf("Let's try to printf a %i \"\' sentence.\n", 50);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Let's try to printf: a [z[%bgs][%s]x] woof\n more [%c]sentence.\n", p, q);
	j = printf("Let's try to printf: a [z[%bgs][%s]x] woof\n more [%c]sentence.\n", p, q);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf(p);
	j = printf(p);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Hey there [z %d%s%c x]\n", INT_MIN, p, 'h');
	j = printf("Hey there [z %d%s%c x]\n", INT_MIN, p, 'h');
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Hey there [%i]\n", INT_MAX);
	j = printf("Hey there [%i]\n", INT_MAX);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("Hey there [%d]\n", 1 + 1);
	j = printf("Hey there [%d]\n", 1 + 1);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i, j);
	i = _printf("%c%c   hi  %bc%s    - - ***\n", q, q, p);
	j = printf("%c%c   hi  %bc%s    - - ***\n", q, q, p);
	_printf("%d %d\n", i, j);
	printf("%d %d\n", i , j);
	i = printf("\n");
	j = _printf("\n");
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i , j);
	i = printf("abc%cfgh%s\n",q, p);
	j = _printf("abc%cfgh%s\n",q, p);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i , j);
	i = printf("[%%cc] [%sss]\n", p);
	j = _printf("[%%cc] [%sss]\n", p);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i , j);
	i = printf("%%%  %s%d%%c %%%% %Ybs\n", p, 10, q, p);
	j = _printf("%%%  %s%d%%c %%%% %Ybs\n", p, 10, q, p);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i , j);
	i = printf("%s\n", l_str, 10, q, p);
	j = _printf("%s\n", l_str, 10, q, p);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i , j);
	i = printf("%s\n", "");
	j = _printf("%s\n", "");
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i, j);
	return (0);
}
