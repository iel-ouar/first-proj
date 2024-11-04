/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:34:29 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/04 13:54:29 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbrlen(int n)
{
	size_t i;

	i = 0;
	if(n == -2147483648)
		return(11);
	else if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		i++;	
	}
	if ( n <= 9)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char *tmp;
	size_t nlen;
	size_t i;

	nlen = nbrlen(n);
	tmp = (char *)malloc(nlen + 1);
	if(!tmp)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		tmp[0] = '-';
		i++;
		n = n * (-1);
	}
	j = nlen;
	while (i < j - 1)
	{
		tmp[j] = n % 10 + '0';
		n = n / 10;
		j--;	
	}
	tmp[nlen] = '\0';
	return(tmp);
}
