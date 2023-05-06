/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:57:17 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/05 22:39:06 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (!lst)
	{
		return (0);
	}
	cont = 0;
	while (lst)
	{
		cont++;
		lst = (*lst).next;
	}
	return (cont);
}
