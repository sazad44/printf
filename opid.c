#include "holberton.h"

/**
 * opid - scans src string for an operator.
 * @v_ls: list for variadic arguments
 * @buf: pointer to a buffer
 * @src: String in which to scan for the operator.
 * @src_i: the index that the '%' was found at
 *
 * Return: a count
 */
int opid(buffer *buf, va_list v_ls, const char *src, int src_i)
{
	int j, k, fin = 0;
	prtOp oArray[] = {
		{"c", write_char}, {"s", write_str},
		{"%", write_mod}, {"d", write_int},
		{"i", write_int}, {"h", NULL},
		{" ", NULL}, {"x", NULL},
		{"b", write_bin},
		{NULL, NULL}
	};

	for (j = 1; src[j + src_i]; j++)
	{
		for (k = 0; oArray[k].op; k++)
		{
			if (src[j + src_i] == *(oArray[k].op))
			{
				/* this if/else block is temporary for testing*/
				if (oArray[k].fn != NULL)
					fin = oArray[k].fn(buf, v_ls);
				else
					break;
				if (fin == 1)
					return (j + 1);
			}
		}
		if (oArray[k].op == NULL && src[j + src_i])
		{
			buf->str[buf->index] = src[src_i];
			buf_inc(buf);
			return (1);
		}
	}
	if (src[j + src_i] == '\0')
	{
		buf->str[buf->index] = src[src_i + j];
		return (-1);
	}
	return (j);
}
