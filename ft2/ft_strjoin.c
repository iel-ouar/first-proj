/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:35:07 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/02 08:35:10 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *tmp;
	size_t j;
	size_t i;
	
	if (!s1 || !s2)
		return(NULL);
	tmp = (char *)malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!tmp)
		return(NULL);
	i = 0;
	while(s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while(s2[j])
	{
		tmp[i + j] = s2[j];
		j++;
	}
	tmp[i + j] = '\0';
	return(tmp);
}
