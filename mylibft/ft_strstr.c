/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:48:05 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/13 18:52:46 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*reader;
	char	*check;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		reader = haystack;
		check = needle;
		while (*reader == *check && *reader != '\0' && *check != '\0')
		{
			reader++;
			check++;
		}
		if (*check == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
