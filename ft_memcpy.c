/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:43:35 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/20 21:10:21 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from src to dst. If they overlap, behaviour is undefined.
// Prefer to use memmove instead of memcpy.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	length;
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	j = 0;
	while (psrc[j] != '\0')
		j++;
	length = j;
	i = 0;
	if (n > 0)
	{
		while ((psrc[i] != '\0' && length <= n)
		{
			(pdst[i] = psrc[i];
			i++;
		}
	}
	return (pdst);
}
