/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:53:32 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/10/26 17:42:16 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t ld;
    size_t ls;
    size_t i;
    size_t j;

    ld = ft_strlen(dst);
    ls = ft_strlen(src);
    i = ld;
    j = 0;
    if (size == 0 || size < ld)
	    return (ls + size);
    while (src[j] && j < size - ld - 1)
    {
    	dst[i] = src[j];
	j++;
	i++;
    }
    dst[i] = '\0';
    return (ls + ld);
}
