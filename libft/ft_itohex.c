#include "libft.h"

static size_t	ft_nhexlen(unsigned int number)
{
	int	len;
	
	if (number == 0)
		len = 1;
	while (number)
	{
		number /= 16;
		len++;
	}
	return (len);
}

char	*ft_itohex(char c, unsigned int n)
{
	char	*cvt_int;
	char	*base;
	size_t	needle;
	size_t	len;

	len = ft_nhexlen(n);
	cvt_int = (char *)malloc((len + 1) * sizeof(char));
	if (cvt_int == NULL)
		return (NULL);
	if (c == 'x')
		base = ft_strdup("0123456789abcdef");
	else
		base = ft_strdup("0123456789ABCDEF");
	needle = 0;
	while ((n / 16) != 0)
	{
		cvt_int[needle] = base[n % 16];
		n /= 16;
		needle++;
	}
	cvt_int[needle] = base[n % 16];
	needle++;
	cvt_int[len] = '\0';
	cvt_int = ft_reverthex(cvt_int);
	return (cvt_int);
}
