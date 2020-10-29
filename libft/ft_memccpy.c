/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:04:31 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 15:43:02 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy (void *dest, const void *source, int c, size_t n)
{
	unsigned char	*udest;
	unsigned char	*usource;
	size_t			i;
	
	udest = (unsigned char *)dest;
	usource = (unsigned char *)source;
	i = 0;
	while (i < n)
	{
		if (usource[i] == (unsigned char)c)
		{
			udest[i] = usource[i];
			break;
		}
		else
		{
			udest[i] = usource[i];
			i++;
		}
	}
    return (dest);
}
