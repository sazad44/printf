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
	char q = 'H';
/*
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
	i = _printf("Hello Moto %    h");
	j = printf("Hello Moto %    h");
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
	i = printf("%d%   %\n", 50);
	j = _printf("%d%   %\n", 50);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i, j);
	i = printf("%d%d%d\n", printf("%s", l_str), printf("%s", l_str), printf("%s", l_str));
	j = _printf("%d%d%d\n", printf("%s", l_str), printf("%s", l_str), printf("%s", l_str));
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i, j);
	i = printf("%d%c%d%%d\n", 130, 130, 50);
	j = _printf("%d%c%d%%d\n", 130, 130, 50);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i, j);*/
	i = printf("%c %d %c %s %c\n", q, 50, q, NULL);
	j = _printf("%c %d %c %s %c\n", q, 50, q, NULL);
	printf("%d %d\n", i, j);
	_printf("%d %d\n", i, j);
	return (0);
}
