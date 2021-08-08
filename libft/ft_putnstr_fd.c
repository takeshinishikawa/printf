#include "libft.h"

void	ft_putnstr_fd(char *s, int size, int fd)
{
	int	counter;

	counter = 0;
	if (s == NULL)
		return ;
	while (*s && counter < size)
	{
		ft_putchar_fd(*s, fd);
		s++;
		counter++;
	}
}
