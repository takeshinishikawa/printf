#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(count * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, count * size);
	return (dest);
}
