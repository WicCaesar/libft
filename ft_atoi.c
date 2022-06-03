/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:20:07 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/03 17:37:06 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts a numeric character in a string to an integer by subtracting 0 from
// the corresponding ASCII decimal value to get a valid numerical value, then
// multiplies by 10 to calculate the following digit. It skips spaces and tabs.
int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	long	operator;

	i = 0;
	num = 0;
	operator = 1;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				operator = -operator;
			i++;
		}
		while (str[i] != '\0' && ft_isdigit(str[i]))
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		return (num * operator);
	}
	return (0);
}

// More complex approach with operator calculations and ignoring invalid chars.
/* int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	operator;

	i = 0;
	num = 0;
	operator = 1;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				operator = -operator;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		return (num * operator);
	}
	return (0);
}
 */