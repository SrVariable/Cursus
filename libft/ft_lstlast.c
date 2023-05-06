/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:15:26 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/05 22:36:19 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	cont;

	if (!lst)
	{
		return (0);
	}
	cont = ft_lstsize(lst) - 1;
	while (cont-- > 0)
	{
		lst = (*lst).next;
	}
	return (lst);
}
