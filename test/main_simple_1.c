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
	_printf("Let's try to printf a %c sentence %c.\n", '4', '8');
	printf("Let's try to printf a %c sentence %c.\n", '4', '8');
	_printf("Let's try to printf a %s sentence %s.\n", "simple", "complex");
	printf("Let's try to printf a %s sentence %s.\n", "simple", "complex");
	_printf("Let's try to printf a %% sentence.\n");
	printf("Let's try to printf a %% sentence.\n");
	return (0);
}
