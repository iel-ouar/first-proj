/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ouar <iel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:30:26 by iel-ouar          #+#    #+#             */
/*   Updated: 2024/11/08 17:54:50 by iel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int	count;

	if (!lst)
		return (NULL);
	ptr = lst;
	count = 0;
	while (ptr)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
