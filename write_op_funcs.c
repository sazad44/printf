#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * write_char - write a character to buffer
 * @buf: the buffer to write to
 * @v_ls: list of arguments to function
 * Return: No Value
 */
void write_char(buffer *buf, va_list v_ls)
{
	char v_temp = va_arg(v_ls, int);

	buf->str[buf->index] = v_temp;
	buf->index++;
	buf->str[buf->index] = '\0';
}

/**
 * write_str - writes a string to buffer
 * @buf: the buffer to write to
 * @v_ls: the list of arguments to access
 * Return: No Value
 */
void write_str(buffer *buf, va_list v_ls)
{
	int i;
	char *v_temp = va_arg(v_ls, char *);

	for (i = 0; v_temp[i]; i++)
	{
		buf->str[buf->index] = v_temp[i];
		buf->index++;
	}
	buf->str[buf->index] = '\0';
}

/**
 * write_mod - write a modulus symbol
 * @buf: the buffer to write to
 * Return: No Value
 */
void write_mod(buffer *buf, va_list v_ls)
{
	(void)v_ls;
	buf->str[buf->index] = '%';
	buf->index++;
	buf->str[buf->index] = '\0';
}
