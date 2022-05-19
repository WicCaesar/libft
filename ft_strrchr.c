/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:00:00 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 20:08:23 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locates the last occurrence of a char in a given string. Reads the string
// backwards. The terminating NUL-character is considered part of the string;
// therefore if c == \0, the function returns the pointer to the terminating \0.
char	*ft_strrchr(const char *s, int c)
{
	t_size	length;
	char	*rewind;

	length = ft_strlen(s) + 1;
	rewind = (char *)s[length]; // descobrir se é necessário char *
	while (length-- >= 0)
	{
		if (c == '\0')
			return (s[length]);
		if (*rewind-- == c)
			return (rewind);
	}
	return (NULL);
}
