int printf(const char *format, ...)
{
	int i;
	va_list v_ls;

	while (format[i])
	{
		opid(buffer, format, i);
		buffer.mem[buffer.index] = format[i];
		buffer.index++;
		i++;
	}
	return (buffer.index);
}

void opid(buffer buffer, char *format, int i)
{
	if (format[i] == '%')
	{
		
