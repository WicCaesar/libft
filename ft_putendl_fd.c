/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 03:10:42 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/04 03:14:37 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], sizeof(char));
		write (fd, "\n", sizeof(char));
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "You are a pirate.";

	ft_putstr(str);
	return (0);
}*/