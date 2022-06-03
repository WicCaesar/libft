/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:11:31 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/03 19:36:33 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Passes the address of every character of a string to a function.
// Alters the source string directly, hence no const char.
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ; // Testar com NULL, mas precisa incluir libft.
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
