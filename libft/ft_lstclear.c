/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:24:51 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/05 23:10:30 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*newlist;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		newlist = (**lst).next;
		del((**lst).content);
		free(*lst);
		*lst = newlist;
	}
}
