#include "ft_printf.h"
#include "libft/libft.h"

int	print_unsigned(t_option *str)
{
	if (str->precision != -1 && str->precision > (int)str->str_len)
		str->str_len = str->precision;
	if (str->width > (int)str->str_len)
	{
		if (str->minus == 1)
		{
			ft_putnstr_fd(str->str, str->str_len, 1);
			ft_putnchar_fd(' ', str->width - str->str_len, 1);
			return (str->width);
		}
		else if (str->zero == 1 && str->precision == -1)
			ft_putnchar_fd('0', str->width - str->str_len, 1);
		else
			ft_putnchar_fd(' ', str->width - str->str_len, 1);
		str->str_len = str->width;
	}
	ft_putnstr_fd(str->str, str->str_len, 1);
	return (str->str_len);
}
