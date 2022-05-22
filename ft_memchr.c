/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:12:06 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/20 21:10:18 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Points to the first byte that corresponds to c in a string.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char *)c;
	while (i++ < n && s++ != '\0')
	{
		if ((char *)s == c)
			return ((char *)s);
	}
	return (NULL);
}
