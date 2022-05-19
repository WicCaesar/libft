/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:42:01 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 15:55:22 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills n bytes of memory with c, starting at s.
// A working type needs to be assigned to type void (line 23).
void	*ft_memset(void *s, int c, t_size n)
{
	t_size	i;

	i = 0;
	while (i <= n)
		((char *)s)[i++] = c;
	return (s);
}
