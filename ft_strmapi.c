/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:12:17 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/08 09:52:57 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Passes the address of every character of a string to a function.
// Doesn't alter the source string, allocates memory for a new string.
// Returns the string created from the successive applications of ’f’.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*postfunction;

	if (!s || !f)
		return (0);
	postfunction = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!postfunction)
		return (NULL);
	i = 0;
	postfunction = ft_strdup(s);
	while (postfunction[i] != '\0')
	{
		f(i, (char)postfunction[i]);
		i++;
	}
	postfunction[i] = '\0';
	return (postfunction);
}
