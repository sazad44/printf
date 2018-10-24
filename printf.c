#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - prints any string with certain flags for modification
 * @format: the string of characters to write to buffer
 * Return: an integer that counts how many writes to the buffer were made
 */
int _printf(const char *format, ...)
{
	int i = 0, var = 0;
	va_list v_ls;
	buffer *buf;

	buf = buf_new();
	if (buf == NULL)
		return (-1);
	if (format == NULL)
		return (-1);
	va_start(v_ls, format);
	while (format[i])
	{
		buf_wr(buf);
		if (format[i] == '%')
		{
			var = opid(buf, v_ls, format, i);
			if (var < 0)
			{
				i = var;
				break;
			}
			i += var;
			continue;
		}
		buf->str[buf->index] = format[i];
		buf_inc(buf);
		i++;
	}
	buf_write(buf);
	if (var >= 0)
		i = buf->overflow;
	buf_end(buf);
	va_end(v_ls);
	return (i);
}
