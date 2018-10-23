#include "holberton.h"

/**
 * buf_init - Function that create a buffer at a default size of 1024
 *
 * Return: a pointer to a pointer.
 */
buffer *buf_new()
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = 1024;
	buf->overflow = 0;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}
/**
 * buf_custom - Function that create a buffer at a custom
 * @size_uint: the desired size of the custom buffer.
 *
 * Return: a pointer to a buffer
 */
buffer *buf_custom(size_t size_uint)
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = size_uint;
	buf->overflow = 0;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}
/**
 * buf_end - frees up the buffer.
 * @buf: pointer to a buffer
 */
void buf_end(buffer *buf)
{
	if (!buf)
		return;
	free(buf->str);
	free(buf);
}


