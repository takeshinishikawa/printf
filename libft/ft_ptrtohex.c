#include "libft.h"

char	*ft_ptrtohex(uintptr_t n)
{
	char	*cvt_hex;
	char	*base;
	size_t	needle;
	size_t	len;

	len = ft_ptrlen(n);
	cvt_hex = (char *)malloc((len + 1) * sizeof(char));
	if (cvt_hex == NULL)
		return (NULL);
	base = ft_strdup("0123456789abcdef");
	needle = 0;
	while ((n / 16) != 0)
	{
		cvt_hex[needle] = base[n % 16];
		n /= 16;
		needle++;
	}
	cvt_hex[needle] = base[n % 16];
	needle++;
	cvt_hex[len] = '\0';
	cvt_hex = ft_strjoin("0x", ft_reverthex(cvt_hex));
	return (cvt_hex);
}
