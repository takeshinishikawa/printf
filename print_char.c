#include "ft_printf.h"
#include "libft/libft.h"

int	print_char(t_option *str, va_list arg)
{
	int	c;

	if (str->type == '%')
		c = '%';
	else
		c = va_arg(arg, int);
	str->str_len = 1;
	if (str->width > 1)
	{
		str->str_len = str->width;
		if (str->minus == 1)
		{
			ft_putchar_fd(c, 1);
			ft_putnchar_fd(' ', str->width - 1, 1);
			return (str->width);
		}
		else if (str->zero)
			ft_putnchar_fd('0', str->width - 1, 1);
		else
			ft_putnchar_fd(' ', str->width - 1, 1);
		str->str_len = str->width;
	}
	ft_putchar_fd(c, 1);
	return (str->str_len);
}
