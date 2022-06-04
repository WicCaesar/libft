/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:45:22 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/04 03:15:21 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints a number in a recursive way.
void	ft_putnbr_fd(int n, int fd)
{
	unsigned char	c;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return (0);
		}
		else
		{
			write(fd, "-", 1);
			n *= -1;
		}
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, sizeof(c));
	}
	else
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
}
