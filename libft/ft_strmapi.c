#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	needle;

	needle = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (needle < len)
	{
		str[needle] = f(needle, s[needle]);
		needle++;
	}
	str[needle] = '\0';
	return (str);
}
