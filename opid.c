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
	int j, k;
	prtOp oArray[] = {
		{"c", write_char},
		{"s", write_str},
		{"%", write_mod},
		{"i", write_int},
		{NULL, NULL}
	};

	for (j = 1; src[j + src_i]; j++)
	{
		for (k = 0; oArray[k].op; k++)
		{
			if (src[j + src_i] == *(oArray[k].op))
			{
				oArray[k].fn(buf, v_ls);
				return (j + 1);
			}
		}
	}
	return (j);
}
