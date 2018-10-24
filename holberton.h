#ifndef _GLOBAL_DEFINITIONS_H
#define _GLOBAL_DEFINITIONS_H

/* #include "global_definitions.h" */

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
 * struct print_buffer - structer for the write buffer.
 * @index: current index of the buffer.
 * @size: size of the buffer.
 * @overflow: this recoreds the overflow.
 * @str: pointer to memory that contains the content for this buffer.
 */
typedef struct print_buffer
{
	size_t index;
	size_t size;
	size_t overflow;
	char *str;
} buffer;

buffer *buf_new();
buffer *buf_custom(size_t);
size_t buf_size(buffer *);
size_t buf_index(buffer *);
char *buf_content(buffer *);
void buf_write(buffer *);
void buf_end(buffer *);
void buf_wr(buffer *);
void buf_inc(buffer *);

/**
 * struct print_ops - struct for the write operators.
 * @op: hold a symbol that represents the operator.
 * @fn: pointer function to the write functions.
 */
typedef struct print_ops
{
	char *op;
	int (*fn)(buffer *, va_list);
} prtOp;

prtOp *prtOp_init();

void append_num(buffer *buf, unsigned int num);

int write_bin(buffer *buf, va_list v_ls);

/* Martin Above / Samie Below */

int _printf(const char *format, ...);

int opid(buffer *buf, va_list v_ls, const char *src, int src_i);

int write_char(buffer *buf, va_list v_ls);

int write_str(buffer *buf, va_list v_ls);

int write_mod(buffer *buf, va_list v_ls);

int write_int(buffer *buf, va_list v_ls);

char *itoc(int num, char *dest);
#endif
