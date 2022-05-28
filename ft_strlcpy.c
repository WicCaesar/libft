/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:30 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/27 21:11:05 by cnascime         ###   ########.fr       */
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

	/* duplicate the string up to dstsize */
	offset = 0;
	/* guard against silly dstsize values */
	if (dstsize > 0)
	{
		while (*(src + offset) != '\0')
		{
			/* bail if dstsize is met */
			if (offset == dstsize)
			{
				offset--;
				break ;
			}
			/* duplicate the string */
			*(dst + offset) = *(src + offset);
			offset++;
		}
	}
	/* always remember to cap a created string! */
	*(dst + offset) = '\0';
	/* return the string length of src */
	while (*(src + offset) != '\0')
		offset++;
	return (offset);
}
