#include "ft_printf.h"
#include "libft/libft.h"

int	get_flags(const char *format, t_option *options)
{
	int	offset;

	if (!format)
		return (0);
	offset = 0;
	while (format[offset] == '-' || format[offset] == '+'
		|| format[offset] == ' ' || format[offset] == '#'
		|| format[offset] == '0')
	{
		if (format[offset] == '-')
			options->minus = 1;
		else if (format[offset] == '+')
			options->plus = 1;
		else if (format[offset] == ' ')
			options->space = 1;
		else if (format[offset] == '#')
			options->hash = 1;
		else if (format[offset] == '0')
			options->zero = 1;
		offset++;
	}
	return (offset);
}

int	get_width(const char *format, t_option *options)
{
	int	offset;

	offset = 0;
	options->width = ft_atoi(format);
	if (options->width < 0)
	{
		options->minus = 1;
		options->width *= -1;
	}
	while (ft_isdigit(*format++))
		offset++;
	return (offset);
}

int	get_precision(const char *format, t_option *options)
{
	int	offset;

	offset = 0;
	options->precision = -1;
	if (*format == '.')
	{
		offset = 1;
		options->precision = ft_atoi(format);
		while (ft_isdigit(*format++))
			offset++;
	}
	return (offset);
}

void	get_type(char type, t_option *options)
{
	if (type == 'c')
		options->type = 'c';
	else if (type == 's')
		options->type = 's';
	else if (type == 'p')
		options->type = 'p';
	else if (type == 'd')
		options->type = 'd';
	else if (type == 'i')
		options->type = 'i';
	else if (type == 'u')
		options->type = 'u';
	else if (type == 'x')
		options->type = 'x';
	else if (type == 'X')
		options->type = 'X';
	else if (type == '%')
		options->type = '%';
	else
		options->type = ' ';
}

t_option	*ft_get_option(const char *format, va_list arg)
{
	t_option	*options;
	int			offset;

	options = ft_calloc(1, sizeof(t_option));
	if (options == NULL)
		return (options);
	offset = 0;
	offset = get_flags(format, options);
	offset += get_width(format + offset, options);
	offset += get_precision(format + offset, options);
	get_type(format[offset], options);
	if (options->type == ' ')
		return (options);
	get_str(options->type, options, arg);
	options->option_offset = offset;
	return (options);
}
