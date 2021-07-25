#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
		}
		nbr = n * (-1);
	}
	else
		nbr = n;
	while ((nbr >= 10))
	{
		ft_putnbr_fd((nbr / 10), fd);
		nbr = nbr - (nbr / 10) * 10;
	}
	ft_putchar_fd(((nbr % 10) + '0'), fd);
}
