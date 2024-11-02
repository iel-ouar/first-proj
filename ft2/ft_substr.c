/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:35:27 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/02 08:35:29 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char *tmp;
	size_t i;
	size_t l;

	if(!s)
		return(NULL);
	l = ft_strlen(s);
	if (start >= l)
		return("");
	if (len > l - start)
	       len = l - start;
	tmp = (char *)malloc (len + 1;)
	if (!tmp)
		return(NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return(tmp);
}
