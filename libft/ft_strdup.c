#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*dst;
	size_t	counter;
	size_t	s1_size;

	s1_size = ft_strlen(s1) + 1;
	dst = (char *)malloc(s1_size);
	counter = 0;
	if (dst == NULL)
		return (NULL);
	while (counter < s1_size)
	{
		((unsigned char *)dst)[counter] = ((unsigned char *)s1)[counter];
		counter++;
	}
	return (dst);
}
