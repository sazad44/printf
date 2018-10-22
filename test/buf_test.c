#include "holberton.h"
#include <stdio.h>

int main(void)
{
	unsigned int int_test, a,b;
	char *a_str = "hello";
	char *str_test;
	buffer *buf;

	buf = buf_new();
	if (!buf)
	{
		printf("Error: fail to create buf struct\n");
		exit(0);
	}
	a = b = 0;
	a = buf_size(buf);
	b = buf_index(buf);
	printf("Size: %u, Index: %u\n", a, b);

	int_test = 0;

	while (a_str[int_test])
	{
		buf->str[buf->index] = a_str[int_test];
		int_test++;
		buf->index++;
	}
	buf->str[buf->index] = '\0';
	
	str_test = buf_content(buf);

	printf("Buf conent: %s\n", str_test);
	free(str_test);
	printf("Testing Write\n");
	buf_write(buf);

	putchar(10);
	
	buf_end(buf);
	if (!buf)
		printf("buffer end Successful\n");
	else
		printf("Buffer failed to end\n");

	printf("Buffer works thank you for test me\n");

	return (0);
}
