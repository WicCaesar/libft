/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:37:56 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/13 18:11:45 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds source string to the end of destination, guaranteeing space for 
// NUL-termination within dstsize. Returns the initial length of dst + src.
t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size	srclength;
	t_size	dstlength;
	t_size	i;

	srclength = 0;
	while (src[srclength] != '\0')
		srclength++;
	dstlength = 0;
	while (dst[dstlength] != '\0')
		dstlength++;
	if (dstsize <= dstlength)
		srclength = srclength + dstsize;
	else
		srclength = srclength + dstlength;
	i = 0;
	while (src[i] != '\0' && dstlength < dstsize - 1)
	{
		dst[dstlength] = src[i];
		dstlength++;
		i++;
	}
	dest[destlength] = '\0';
	return (srclength);
}
