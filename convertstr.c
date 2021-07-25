#include "ft_printf.h"
#include "libft/libft.h"

void	convert_char(t_option *options, va_list arg)
{
	options->str = ft_calloc(2, sizeof(char));
	if (options->str == NULL)
		return ;
	options->str[0] = (char)(va_arg(arg, int));
}

void	convert_str(t_option *options, va_list arg)
{
	char	*str_aux;

	str_aux = va_arg(arg, char *);
	if (str_aux == NULL)
		str_aux = "(null)";
	if (options->precision >= 0)
		options->str = ft_substr(str_aux, 0, options->precision);
	else
		options->str = ft_strdup(str_aux);
	options->str_len = ft_strlen(options->str);
}

void	convert_ptr(t_option *options, va_list arg)
{
	options->str = ft_ptrtohex(va_arg(arg, uintptr_t));
	options->str_len = ft_strlen(options->str);
}

void	convert_perc(t_option *options)
{
	options->str = ft_strdup("%");
}

void	get_str(char type, t_option *options, va_list arg)
{
	if (type == 'c')
		convert_char(options, arg);
	else if (type == 's')
		convert_str(options, arg);
	else if (type == 'p')
		convert_ptr(options, arg);
	else if (type == 'd')
		convert_deci(options, arg);
	else if (type == 'i')
		convert_ibaseten(options, arg);
	else if (type == 'u')
		convert_ui(options, arg);
	else if (type == 'x')
		convert_hex(options, arg);
	else if (type == 'X')
		convert_heX(options, arg);
	else if (type == '%')
		convert_perc(options);
	else
		options->str = NULL;
}
