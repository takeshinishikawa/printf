#include "libft.h"

size_t	ft_hexlen(unsigned int number)
{
	int	count;

	count = 0;
	if (number == 0)
		count = 1;
	while (number)
	{
		number /= 16;
		count++;
	}
	return (count);
}
