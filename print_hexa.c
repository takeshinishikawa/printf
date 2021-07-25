#include "ft_printf.h"
#include "libft/libft.h"

static int	has_hash(t_option *str)
{
	if (str->hash == 1)
	{
		str->str_len +=2;
		write (1, "0", 1);
		if (str->type == 'x')
			write (1, "x", 1);
		else
			write (1, "X", 1);
		return (2);
	}
	return (0);
}

int	print_hexa(t_option *str)
{
	int	hash_sign;
	
	if (str->precision != -1 && str->precision > (int)str->str_len)
		str->str_len = str->precision;
	if ((hash_sign = has_hash(str)))
		str->str_len += 2;
	if (str->width > (int)str->str_len)
	{
		if (str->minus == 1)
		{
			ft_putnstr_fd(str->str, str->str_len - hash_sign, 1);
			ft_putnchar_fd(' ', str->width - str->str_len, 1);
			return (str->width);
		}
		else if (str->zero == 1 && str->precision == -1)
			str->precision = str->width;
		else
			ft_putnchar_fd(' ', str->width - str->str_len, 1);
		str->str_len = str->width;
	}
	ft_putnstr_fd(str->str, str->str_len, 1);
	return (str->str_len);
}
