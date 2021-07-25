#include "ft_printf.h"
#include "libft/libft.h"

int	print_ptr(t_option *str)
{
	if (str->width > (int)str->str_len)
	{
		if (str->minus == 1)
		{
			ft_putstr_fd(str->str, 1);
			ft_putnstr_fd(" ", str->width - str->str_len, 1);
			return (str->width);
		}
		else if (str->zero == 1)
			ft_putnstr_fd("0", str->width - str->str_len, 1);
		else
			ft_putnstr_fd(" ", str->width - str->str_len, 1);
		ft_putstr_fd(str->str, 1);
		return (str->width);
	}
	ft_putstr_fd(str->str, 1);
	return (str->str_len);
}
