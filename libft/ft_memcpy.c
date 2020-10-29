/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:02:12 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 15:04:16 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned char	*str;
	unsigned char	*str_source;
	size_t			i;

	str_source = (unsigned char *)source;
	str = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		str[i] = str_source[i];
		i++;
	}
	return (dest);
}
