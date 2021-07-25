#include "libft.h"

size_t	ft_unlen(unsigned int number)
{
	int	count;

	count = 0;
	if (number == 0)
		count = 1;
	while (number)
	{
		number /= 10;
		count++;
	}
	return (count);
}
