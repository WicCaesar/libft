/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:13:09 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 20:43:15 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long t_size; // Desnecessário se utilizar a biblioteca malloc

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
t_size	ft_strlcat(char *dst, const char *src, t_size dstsize);
t_size	ft_strlen(const char *s);
t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
char	*ft_strnstr(const char *haystack, const char *needle, t_size len);
void	ft_bzero(void *s, t_size n);
void	*ft_memset(void *s, int c, t_size n);
void	*ft_memchr(const void *s, int c, t_size n)

#endif