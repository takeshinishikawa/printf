#include "ft_printf.h"
#include "libft/libft.h"

int	print_int(t_option *str)
{
	if (str->precision > (int)str->str_len || (str->precision!= -1 && str->str[0] == '0'))
		str->str_len = str->precision;
	/*if (str->space == 1 || str->plus == 1 || str->str[0] == '-')
		str->str_len += 1;*/
	if (str->width > (int)str->str_len)
	{
		if (str->minus == 1)
		{
			ft_putstr_fd(str->str, 1);
			ft_putnstr_fd(" ", str->width - str->str_len, 1);
			return (str->width);
		}
		else if (str->zero == 1 && str->precision == -1)
			str->precision += str->width;
		else
			ft_putnstr_fd(" ", str->width - str->str_len, 1);
		str->str_len = str->width;	
	}
	ft_putstr_fd(str->str, 1);
	return (str->str_len);
}
