/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:47:04 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 01:55:21 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	begcont;
	size_t	endcont;

	if (!s1 || !set)
	{
		return (ft_calloc(1, 1));
	}
	begcont = 0;
	while (ft_strchr(set, s1[begcont]))
	{
		begcont++;
	}
	begcont = 0;
	while (ft_strrchr(set, s1[begcont]))
	{
		endcont--;
	}
	return (ft_substr(s1, begcont, endcont));
}
