/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:27:57 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/07 14:12:06 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	if (tmpdst > tmpsrc)
	{
		while (len > 0)
		{
			*tmpdst[len] = *tmpsrc[len];
			len--;
		}
	}
	else
	{
		while (i < len)
			*tmpdst[i] = *tmpsrc[i];
	}
	return (dst);
}
