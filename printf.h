#ifndef _PRINTF_H
#define _PRINTF_H

typedef struct Buffer{
	char *mem = malloc(sizeof(char) * 1024);
	int index;
} buffer;

opid(buffer buffer, char *format);
#endif
