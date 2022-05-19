/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:36:30 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/13 18:06:56 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies source string, guaranteeing space for NUL-termination within dstsize.
// Returns the total length of src.
t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	i;
	t_size	j;
	t_size	length;

	j = 0;
	// while (src[j++]) É possível?
	while (src[j] != '\0')
		j++;
	length = j;
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && length <= dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}
