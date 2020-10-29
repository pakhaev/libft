/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:09:20 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 14:16:20 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
