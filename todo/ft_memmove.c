/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:14:26 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/25 16:07:23 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	length;
	char	*temp;
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (psrc[i++] != '\0')
	length = i;
	temp = malloc(sizeof(char) * len);
	if (temp == NULL)
		return (NULL);
	i = 0;
	if (len > 0)
	{
		while (psrc[i] != '\0' && length <= len)
		{
			while (i++ < len)
				temp[i] = psrc[i];
			i = 0;
			while (i++ < len)
				pdst[i] = temp[i];
		}
	}
	return (pdst);
}
