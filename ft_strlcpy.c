/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:30 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/01 04:52:00 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies source string, guaranteeing space for NUL-termination within dstsize.
// Returns the total length of src.
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	length;

// 	length = ft_strlen(src);
// 	i = 0;
// 	if (dstsize > 0)
// 	{
// 		while (src[i] != '\0' && length <= dstsize - 1)
// 		{
// 			dst[i] = src[i];
// 			i++;
// 		}
// 		dst[i] = '\0';
// 	}
// 	return (length);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	offset;

	offset = 0;
	if (dstsize > 0)
	{
		while (*(src + offset) != '\0')
		{
			if (offset == dstsize)
			{
				offset--;
				break ;
			}
			*(dst + offset) = *(src + offset);
			offset++;
		}
	}
	*(dst + offset) = '\0';
	while (*(src + offset) != '\0')
		offset++;
	return (offset);
}
