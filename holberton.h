#ifndef _GLOBAL_DEFINITIONS_H
#define _GLOBAL_DEFINITIONS_H

#include "global_definition.h"

#endif

#ifndef STDLIB_H
#define STDLIB_H

#include <stdlib.h>

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
 * @str - pointer to memory that contains the content for this buffer.
 */
typedef struct
{
	size_t index;
	size_t size;
	char *str;
} buffer;

void buf_init(buffer *);
void buf_custom(buffer *, size_t);
size_t buf_size(buffer *);
size_t buf_index(buffer *);
char *buf_content(buffer *);
void buf_write(buffer *);
void buf_end(buffer *);

typedef struct
{
	char *op;
	int (*fn_int)(char *, struct buffer *);
	void (*fn_void)(void *);
} prtOp;

prtOp *prtOp_init();


int _printf(const char *format, ...);

#endif
