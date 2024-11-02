/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:27:45 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/10/27 11:52:00 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmps;
	unsigned char tmpc;
	size_t	i;
	
	tmps = (unsigned char *)s;
	tmpc = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (tmps[i] == tmpc )
			return ((void *)tmps + i);
		i++;
	}
	return (NULL);
}
