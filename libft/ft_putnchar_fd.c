#include "libft.h"

void	ft_putnchar_fd(char c, int n, int fd)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		write(fd, &c, 1);
		counter++;
	}
}
