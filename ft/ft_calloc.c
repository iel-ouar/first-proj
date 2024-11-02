#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *tmp;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
        	return (malloc(0));

	tmp = malloc (nmemb * size);

	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
