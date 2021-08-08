#include "libft.h"

int	ft_nlen(long long number)
{
	int					len;
	unsigned long long	aux;

	len = 0;
	aux = number;
	if (number == 0)
		len = 1;
	if (number < 0)
		aux = number * -1;
	while (aux)
	{
		aux /= 10;
		len++;
	}
	return (len);
}
