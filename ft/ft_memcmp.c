/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:15:34 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/10/27 13:15:37 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *tmps1;
	const unsigned char *tmps2;

	tmps1 = (const unsigned char *)s1;
	tmps2 = (const unsigned char *)s2;
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (tmps1[i] != tmps2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
