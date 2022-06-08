/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:53:03 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/07 11:47:51 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isforbidden(char character, char *forbidden);

// Allocates and returns a copy of s1 with the characters specified in set
// removed from the beginning and the end of the string.
char	*ft_strtrim(char const *s1, char const *set)
{
	int		length;
	int		trimfw;
	int		trimbw;
	char	*trimmed;

	length = ft_strlen(s1);
	trimbw = 0;
	while ((length - trimbw) > 0
		&& isforbidden(s1[length - trimbw], (char *)set))
		trimbw++;
	trimfw = 0;
	while (s1[trimfw] != '\0' && isforbidden(s1[trimfw], (char *)set))
		trimfw++;
	trimmed = malloc(sizeof(char *) * (length - trimbw - trimfw + 1));
	if (!trimmed)
		return (NULL);
	trimmed = ft_substr(s1, trimfw, length - trimbw);
	trimmed[length - trimbw + 1] = '\0';
	return (trimmed);
}

// começar a checagem de trás para a frente (strlen--)
// enquanto for proibido, contar +1 (armazenar)
// quando for permitido, começar a checagem da frente
// enquanto for proibido, contar +1 (armazenar também)
// mallocar sizeof(char *) * (strlen(s1) - trimfw - trimbw + 1)
// i = 1;
// começar a copiar para trimmed a partir de s1[trimfront + i] ft_substr


// Checks whether the character in question is in the forbidden list.
// 1-true if it's forbidden, 2-false if it's allowed.
static int	isforbidden(char character, char *forbidden)
{
	int	i;

	i = 0;
	while (forbidden[i] != '\0')
	{
		if (character == forbidden[i])
			return (1);
		forbidden++;
	}
	if (character == '\0')
		return (1);
	return (0);
}

/*char	*ft_strtrim(char const *s1, char const *set)
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
}*/