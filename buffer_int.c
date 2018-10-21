#define "holberton.h"
#define <stdio.h>
/**
 * buf_init - Function that initialize a buffer at a default size of 1024
 * @buf: pointer to a buffer type.
 */
void buf_init(buffer *buf)
{
	buf->index = 0;
	buf->size = 1024;
	buf->str = malloc(sizeof(char) * buf->size + 1);
}

/**
 * buf_custom - Function that initialize a buffer at a custom
 * @buf: pointer to a buffer type.
 * @size_uint
 */
void buf_custom(buffer *buf, size_t size_uint)
{
	buf->index = 0;
	buf->size = size_uint;
	buf->str = malloc(sizeof(char) * buf->size + 1);
}
/**
 * but_end - frees up the buffer.
 */
void buf_end(buffer *buf)
{
	if (!buf)
		return;
	free(buf->index);
	free(buf->size);
	free(buf->str);
	free(buf);
}

