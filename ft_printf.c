#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printtype(t_option *str)
{
	int	n_chars;
	
	if (str->type == 'c' || str->type == '%')
		n_chars = print_char(str);
	else if (str->type == 'd' || str->type == 'i')
		n_chars = print_int(str);
	else if (str->type == 'x' || str->type == 'X')
		n_chars = print_hexa(str);
	else if (str->type == 'p')
		n_chars = print_ptr(str);
	else if (str->type == 'u')
		n_chars = print_unsigned(str);
	else if (str->type == 's')
		n_chars = print_str(str);
	return (n_chars);
}

int	ft_printf(const char *format, ...)
{
	int			n_chars;
	va_list		arg;
	t_option	*str;

	n_chars = 0;
	va_start(arg, format);
	while(*format != '\0')
	{
		while(*format != '%' && *format)
		{
			ft_putchar_fd(*format, 1);
			format++;
			n_chars++;
		}
		if (*format == '\0')
			break;
		format++;
		str = ft_get_option(format, arg);
		if (str == NULL)
			return (-1);
		format += str->option_offset;
		n_chars += ft_printtype(str);
		format++;
	}
	return (n_chars);
}
