/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:28:20 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/05 23:10:44 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlist;

	if (!lst)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		newlist = ft_lstlast(*lst);
		(*newlist).next = new;
	}
}
