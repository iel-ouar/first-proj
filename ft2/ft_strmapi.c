/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:35:15 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/04 16:56:56 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *tmp;
	size_t len;
	
	len = ft_strlen(s);
	tmp = (char *)malloc((len + 1)*sizeof(char));
	if(!tmp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = (*f)(i,s[i]);
		i++;
	}
	tmp[i] = NULL;
	return (tmp);
}
