/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:19:21 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 16:21:17 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *app)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (app[j])
	{
		dest[i] = app[j];
		i++;
		j++;
	}
	return (dest);
}
