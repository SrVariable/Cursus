/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:47:04 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 14:17:33 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	scont;
	size_t	econt;

	if (!s1 ||!set)
	{
		return (0);
	}	
	if (!*s1)
	{
		return (ft_calloc(1, 1));
	}
	scont = 0;
	econt = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + scont)))
	{
		scont++;
	}
	while (ft_strrchr(set, *(s1 + econt)))
	{
		econt--;
	}
	return (ft_substr(s1, scont, econt - scont + 1));
}
