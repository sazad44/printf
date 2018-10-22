#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - prints any string with certain flags for modification
 * @format: the string of characters to write to buffer
 * Return: an integer that counts how many writes to the buffer were made
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list v_ls;
	buffer *buf;

	buf = buf_new();
	if (buf == NULL)
		exit(0);
	va_start(v_ls, format);
	while (format[i])
	{
		if (format[i] == '%')
			i += opid(buf, v_ls, format, i);
		buf->str[buf->index] = format[i];
		buf->index++;
		i++;
	}
	buf_write(buf);
	i = buf_index(buf);
	buf_end(buf);
	va_end(v_ls);
	return (i);
}
