/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:17:11 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 11:24:12 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	char	*str;
	char	*str2;

	if (!dest && !src)
		return (dest);
	str = (char *)dest;
	str2 = (char *)src;
	while (bytes--)
	{
		*str++ = *str2++;
	}
	return (dest);
}

/* //This is for testing

//Both NULL
	#include <stdio.h>
	#include <string.h>

	int	main(void)
	{
		char	str[] = "";
		char	str2[] = "";

		printf("ft_memcpy: %p\n", ft_memcpy(str, str2, 5));
		printf("   memcpy: %p\n", memcpy(str, str2, 5));
	}

//dest > src
	#include <stdio.h>
	#include <string.h>

	int	main(void)
	{
		char	str[] = "Hola";
		char	str2[] = "";

		printf("ft_memcpy: %p\n", ft_memcpy(str, str2, 5));
		printf("   memcpy: %p\n", memcpy(str, str2, 5));
	}

//dest < src
	#include <stdio.h>
	#include <string.h>

	int	main(void)
	{
		char	str[] = "";
		char	str2[] = "Hola";

		printf("ft_memcpy: %p\n", ft_memcpy(str, str2, 5));
		printf("   memcpy: %p\n", memcpy(str, str2, 5));
	}
 */
/*
     RRRRR                            
   RRR   RRR                          
  RRR     RRR                         
  RR      RRRRRRRRRRRRRRRR            
  RRR     RRRR          RRRRRR        
   RRR    RRR               RRR       
     RRRRRRRR               RRRR      
          RRR            RRRRR        
          RRR            RRR          
          RRR          RRRR           
         RRR       RRRRR              
         RRRRRRRRRRRRRR               
       RRRR          RRRR             
      RRRR             RRR            
     RRRR               RRR           
    RRR                  RRR     RRRRR
  RRRR                    RRRRRRRR    
*/