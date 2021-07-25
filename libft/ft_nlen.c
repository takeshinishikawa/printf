#include "libft.h"

size_t	ft_nlen(int number)
{
	int	len;

	len = 0;
	if (number < 0)
		len = 1;
	else
		len = 0;
	if (number == 0)
		len = 1;
	while (number)
	{
		number /= 10;
		len++;
	}
	return (len);
}
