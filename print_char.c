#include "ft_printf.h"
#include "libft/libft.h"

int	print_char(t_option *str)
{
	if (str->width > 1)
	{
		if (str->minus == 1)
		{
			ft_putchar_fd(*str->str, 1);
			ft_putnchar_fd(' ', str->width - 1, 1);
			return (str->width);
		}
		else if (str->zero)
			ft_putnchar_fd('0', str->width - 1, 1);
		else
			ft_putnchar_fd(' ',str->width - 1, 1);
		ft_putchar_fd(*str->str, 1);
		return (str->width);
	}
	ft_putchar_fd(*str->str, 1);
	return (1);
}
