/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:53:03 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/03 18:24:34 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates and returns a copy of s1 with the characters specified in set
// removed from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	char	*trimmed;

	// TENTAR COM MEU SPLITTTTTTTTTTTT
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	length = ft_strlen(s1);
	while (length && ft_strchr(set, s1[length]))
		length--;
	trimmed = ft_substr((char *)s1, 0, length + 1);
	return (trimmed);
}
