/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:54:47 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/04 03:00:28 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_non_printable_fd(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(fd, "\\", 1);
			write(fd, &"0123456789abcdef"[str[i] / 16], 1);
			write(fd, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "So long,\n and thanks\a for\tall \rthe fish!\v";

	ft_putstr_non_printable_fd(str);
	return (0);
}*/
