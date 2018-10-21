int _printf(const char *format, ...)
{
	int i;
	va_list v_ls;

	buffer *buf;
	va_start(v_ls, format);
	while (format[i])
	{
		buffer.index += opid(buf, format, v_ls);
		buffer.str[buffer.index] = format[i];
		buffer.index++;
		i++;
	}
	return (buffer.index);
}

int opid(buffer *buffer, char *format, va_list v_ls)
{
	if (format[*buffer.index] == '%')
	{
		for (; format[*buffer.index] < 'a' || format[*buffer.index] > 'z'; *buffer.index++)
		{
			
