#include "ft_printf.h"
#include "libft/libft.h"

void	convert_deci(t_option *options, va_list arg)
{
	int	nbr;

	nbr = va_arg(arg, int);
	options->str = ft_itoa(nbr);
	if (options->precision != -1)
		options->zero = 0;
	options->str_len = ft_nlen(nbr);
}

void	convert_ibaseten(t_option *options, va_list arg)
{
	int	nbr;

	nbr = va_arg(arg, int);
	options->str = ft_itoa(nbr);
	if (options->precision != -1)
		options->zero = 0;
	options->str_len = ft_nlen(nbr);
}

void	convert_ui(t_option *options, va_list arg)
{
	unsigned int	unbr;

	unbr = va_arg(arg, unsigned int);
	options->str = ft_utoa(unbr);
	options->str_len = ft_unlen(unbr);
}

void	convert_hex(t_option *options, va_list arg)
{
	unsigned int	unbr;
	
	unbr = va_arg(arg, unsigned int);
	options->str = ft_itohex('x', unbr);
	options->str_len = ft_hexlen(unbr);
}

void	convert_heX(t_option *options, va_list arg)
{
	unsigned int	unbr;
	
	unbr = va_arg(arg, unsigned int);
	options->str = ft_itohex('X', unbr);
	options->str_len = ft_hexlen(unbr);
}
