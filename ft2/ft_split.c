/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:34:55 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/07 16:54:53 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	b;
	int	i;

	i = 0;
	count = 0;
	b = 0;
	while (s[i])
	{
		if (s[i] != c && b == 0)
		{
			b = 1;
			count++;
		}
		else if (s[i] == c)
			b = 0;
		i++;
	}
	return (count);
}

void	ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	start;
	char			**tmp;
	size_t			len;
	size_t			j;
	size_t			i;
	size_t			count;

	count = count_words(s, c);
	tmp = (char **)malloc((count + 1) * sizeof(char *));
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		len = 0;
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
		{
			len++;
			j++;
		}
		tmp[i] = ft_substr(s, start, len);
		if (!tmp[i])
		{
			ft_free(tmp);
			return (NULL);
		}
		i++;
	}
	tmp[i] = (NULL);
	return (tmp);
}
