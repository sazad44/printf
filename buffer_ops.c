#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 * buf_size - get the size;
 * @buf: pointer to a buffer.
 *
 * Return: size_t type of the size.
 */
size_t buf_size(buffer *buf)
{
	if (!buf)
		return (0);
	return (buf->size);
}

/**
 * buf_index - gets the current index;
 * @buf: pointer to a buffer.
 *
 * Return: size_t type of the index else 0 if buf is NULL.
 */
size_t buf_index(buffer *buf)
{
	if (!buf)
		return (0);
	return (buf->index);
}

/**
 * buf_content - creates a copy of the buffer str field
 * @buf: pointer to a buffer.
 *
 * Return: a pointer to a copy.
 */
char *buf_content(buffer *buf)
{
	unsigned int i;
	char *copy;

	if (!buf)
		return (NULL);

	copy = malloc(sizeof(char) * buf->size + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < buf->index)
	{
		copy[i] = buf->str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * buf_write - write out the buffers str;
 * @buf: pointer to a buffer.
 */
void buf_write(buffer *buf)
{
	if (!buf)
		return;
	write(1, buf->str, buf->index);
}

/**
 * buf_wr - write and rest the buffer
 * @buf: pointer to the buffer
 */
void buf_wr(buffer *buf)
{
	if (!buf || (buf->index <= buf->size))
		return;
	buf_write(buf);
	buf->index = 0;
	buf->str[0] = '\0';
}
