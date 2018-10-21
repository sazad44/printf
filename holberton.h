#ifndef _GLOBAL_DEFINITIONS_H
#define _GLOBAL_DEFINITIONS_H

#include "global_definition.h"

#endif

#ifndef STDARG_H
#define STDARG_H

#include <stdarg.h>

#endif

#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/**
 * struct buffer - structer for the write buffer.
 * @index - current index of the buffer.
 * @size - size of the buffer.
 * @buf - pointer to memory that contains the content for this buffer.
 */
typedef struct
{
	unsigned int index;
	unsigned int size;
	char *buf;
} buffer;

void buf_init(struct buffer *buf);
void buf_custom(struct buffer *buf, unsigned int size);
int buf_size(struct buffer);
int buf_index(struct buffer);
char *buf_content(struct buffer);
void buf_write(struct buffer);
void buf_end(struct buffer *buf);

typedef struct
{
	char *op;
	int (*fn_int)(char *, struct buffer *);
	void (*fn_void)(void *);
} prtOp;

prtOp *prtOp_init();


int _printf(const char *format, ...);

#endif
