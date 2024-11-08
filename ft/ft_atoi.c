/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:25:26 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/07 12:26:31 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sing;
	int	n;

	n = 0;
	sing = 1;
	i = 0;
	while (((str[i] >= 7 && str[i] <= 13) || str[i] == 32) && (str[i] != '\0'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sing = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * sing);
}
//#include <stdio.h>

/*int main()
{
    char str[] = "  -43612skjdhkjh4125";
    printf("nmbr is : %d\n",ft_atoi(str));
    printf("nmbr is : %d\n",atoi(str));

    return (0);    
}*/
