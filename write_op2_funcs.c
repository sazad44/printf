#include "holberton.h"

/**
 * write_bin - convert a digit to binary.
 * @buf: pointer to a buffer.
 * @v_ls: list of argument to process.
 *
 * Return: 1;
 */
int write_bin(buffer *buf, va_list v_ls)
{
	int i;
	unsigned int num = va_arg(v_ls, int);
	char ar[100] = {'\0'};

	i = 0;
	if (num == 0)
	{
		buf->str[buf->index] = '0';
		buf_inc(buf);
	}
	while (num > 0)
	{
		ar[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}
	while (i--)
	{	buf_wr(buf);
		buf->str[buf->index] = ar[i];
		buf_inc(buf);
	}

	return (1);
}
