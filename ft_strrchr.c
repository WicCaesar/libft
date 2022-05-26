/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:00:00 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/25 22:13:40 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates the last occurrence of a char in a given string. Reads the string
// backwards. The terminating NUL-character is considered part of the string;
// therefore if c == \0, the function returns the pointer to the terminating \0.
char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	*rewind;

	length = ft_strlen(s);
	rewind = (char *)s + length;
	while (length-- > 0)
	{
		if (*rewind == c)
			return (rewind);
		rewind--;
	}
	return (NULL);
}
