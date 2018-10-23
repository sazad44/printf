#include "holberton.h"

/**
 * buf_inc - increment both index and overflow.
 * @buf: pointer to a buffer.
 */
void buf_inc(buffer *buf)
{
	if (!buf)
		return;
	buf->index++;
	buf->overflow++;
}
