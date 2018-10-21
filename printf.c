int printf(const char *format, ...)
{
	int i;
	va_list v_ls;

	while (format[i])
	{
		opid(buffer, format);
		buffer.mem[buffer.index] = format[i];
		buffer.index++;
		i++;
	}
	return (buffer.index);
}
