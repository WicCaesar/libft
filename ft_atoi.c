/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:20:07 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/04 03:06:20 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a numeric character in a string to an integer by subtracting 0 from
// the corresponding ASCII decimal value to get a valid numerical value, then
// multiplies by 10 to calculate the following digit.
int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	operator;

	i = 0;
	num = 0;
	operator = 1;
	while (str[i] != '\0')
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			operator = -operator;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * operator);
}
