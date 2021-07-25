#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	counter;
	char	*strjoin;

	counter = 0;
	if (!s1 || !s2)
		return (NULL);
	strjoin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (strjoin == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		strjoin[counter] = *s1;
		s1++;
		counter++;
	}
	while (*s2 != '\0')
	{
		strjoin[counter] = *s2;
		s2++;
		counter++;
	}
	strjoin[counter] = '\0';
	return (strjoin);
}
