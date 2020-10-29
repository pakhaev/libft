/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvoltigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:19:59 by rvoltigo          #+#    #+#             */
/*   Updated: 2020/10/29 14:33:16 by rvoltigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>

void	*ft_memset(void *dest, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *source, size_t n);

void	*ft_memccpy(void *dest, const void *source, int c, size_t n);

void	*ft_memchr(const void *arr, int c, size_t n);

int		ft_memcmp(const void *arr1, const void *arr2, size_t n);

char	*ft_strdup(const char *str);

int		ft_isalpha(char c);

int		ft_isalnum(char c);

int		ft_isascii(char c);

int		ft_isprint(char c);

char	ft_toupper(char c);

char	ft_tolower(char c);

int		ft_atoi(const char *str);

char	*st_strcpy(char *dest, const char *source);

char	*ft_strncpy(char *dest, const char *source, size_t n);

char	*ft_strcat(char *dest, const char *app);

char	*ft_strncat(char *dest, const char *app, size_t n);

char	*ft_strchr(const char *str, int ch);

int		ft_strcmp(const char *str1, const char *str2);

int		ft_strlen(char *str);

#endif
