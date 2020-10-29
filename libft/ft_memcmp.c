/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:49:50 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 15:52:20 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)arr1;
	s2 = (unsigned char *)arr2;
	i = 0;
	while (s1[i] == s2[i] && (i < n))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
