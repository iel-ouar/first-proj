#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *tmp;
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen (s);
	tmp = (char *)malloc(len + 1);

	if (!tmp)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
