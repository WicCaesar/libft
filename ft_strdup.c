/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:57:43 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 16:12:13 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Returns a pointer to a duplicate of a given string.
char	*ft_strdup(const char *s1)
{
	char	*ditto;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (s1[length])
		length++;
	ditto = malloc (sizeof (*ditto) * (length + 1));
	if (ditto == NULL)
		return (NULL);
	while (s1[i])
	{
		ditto[i] = s1[i];
		i++;
	}
	ditto[length] = '\0';
	return (ditto);
}
