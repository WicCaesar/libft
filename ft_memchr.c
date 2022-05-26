/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:12:06 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/25 16:04:53 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Points to the first byte that corresponds to c in a string.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n && string[i] != '\0')
	{
		if (string[i] == (unsigned char)c)
			return (string + i);
		i++;
	}
	return (NULL);
}
