#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	src_size;
	size_t	dst_size;

	counter = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dstsize <= dst_size)
		return (dstsize + src_size);
	while (dst[counter])
		counter++;
	while (*src && (counter + 1 < dstsize))
	{
		dst[counter++] = *(src++);
	}
	dst[counter] = '\0';
	return (dst_size + src_size);
}
