/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:16:56 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/13 19:14:31 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Computes the length of a string, not counting the NUL-character.
t_size	ft_strlen(const char *s)
{
	t_size	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
