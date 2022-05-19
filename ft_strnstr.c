/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:45:38 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 19:28:20 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Finds a string inside another string, looking only for the first occurence 
// within the amount of characters in len, and, obviously, before \0.
char	*ft_strnstr(const char *haystack, const char *needle, t_size len)
{
	t_size	needllen;
	t_size	i;
	t_size	j;

	if (*needle == '\0')
		return ((char *)haystack);
	needllen = ft_strlen((char *)needle);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (i + j < len && j < needllen && haystack[i + j] == needle[j])
				j++;
			if (j == needllen)
				return ((char *)&haystack[i]); // testar isso aqui
		}
		i++;
	}
	return (NULL);
}

// Stack Overflow
char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	if (0 == (needle_len = strnlen(needle, len)))
		return ((char *)haystack);

	for (i=0; i <= (int) (len-needle_len); i++)
	{
		if ((haystack[0] == needle[0])
			&& (0 == strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*#include <stdio.h> // Comentar tudo
#include <string.h>

int    main(void)
{
    printf("Original: %s\n",    strnstr("Toatoa ukulele", "ku", 14));
    printf(" Destino: %s\n", ft_strnstr("Toatoa ukulele", "ku", 14));

    printf("Original: %s\n",    strnstr("Toatoa ukulele", "ke", 14));
    printf(" Destino: %s\n", ft_strnstr("Toatoa ukulele", "ke", 14));

    printf("Original: %s\n",    strnstr("Huehuecoyotl", "Hue", 12));
    printf(" Destino: %s\n", ft_strnstr("Huehuecoyotl", "Hue", 12));

    printf("Original: %s\n",    strnstr("Huehuecoyotl", "hue", 12));
    printf(" Destino: %s\n", ft_strnstr("Huehuecoyotl", "hue", 12));
}*/