#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a %c sentence.\n", '4');
	printf("Let's try to printf a %c sentence.\n", '4');
	_printf("Let's try to printf a %s sentence.\n", "simple");
	printf("Let's try to printf a %s sentence.\n", "simple");
	_printf("Let's try to printf a %% sentence.\n");
	printf("Let's try to printf a %% sentence.\n");
	return (0);
}
