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
 * @v_ls: the list of parameters that refers to ellipses
 * Return: No Value
 */
void write_mod(buffer *buf, va_list v_ls)
{
	(void)v_ls;
	buf->str[buf->index] = '%';
	buf->index++;
	buf->str[buf->index] = '\0';
}

/**
 * write_int - write a int to the buffer
 * @buf: the buffer to write to
 * @v_ls: the list of parameters to refer to
 * Return: No Value
 */
void write_int(buffer *buf, va_list v_ls)
{
	int num;

	num = va_arg(v_ls, int);
	append_num(buf, num);
}

/**
 * append_num - add number as string to buffer
 * @buf: the buffer to write to
 * @num: the number to write to the buffer
 * Return: No Value
 */
void append_num(buffer *buf, int num)
{
	if (num == 0)
		return;
	append_num(buf, num / 10);
	buf->str[buf->index] = (num % 10) + '0';
	buf->index++;
}
