/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:35:20 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/07 16:18:25 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	debut;

	if (!s1 || !set)
		return (NULL);
	debut = 1;
	while (s1[debut] && ft_char_set(set, s1[debut]))
		debut++;
	j = ft_strlen(s1);
	while (j > debut && ft_char_set(set, s1[j - 1]))
		j--;
	tmp = (char *)malloc(j - debut + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (debut < j)
	{
		tmp[i] = s1[debut];
		i++;
		debut++;
	}
	tmp[i] = '\0';
	return (tmp);
}
