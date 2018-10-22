#include "holberton.h"
#include <stdio.h>

int opid(buffer *buf, va_list v_ls, const char *src, int src_i)
{
	int j, k;
	prtOp oArray[] = {
		{"c", write_char},
		{"s", write_str},
		{"%", write_mod},
		{"d", write_int},
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
