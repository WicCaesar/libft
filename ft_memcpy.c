/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:43:35 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/18 21:10:15 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies n bytes from src to dst. If they overlap, behaviour is undefined.
void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	t_size	i;
	t_size	j;
	t_size	length;

	j = 0;
	while ((char *)src[j] != '\0')
		j++;
	length = j;
	i = 0;
	if (n > 0)
	{
		while ((char *)src[i] != '\0' && length <= n)
		{
			(char *)dst[i] = (char *)src[i];
			i++;
		}
	}
	return ((char *)dst);
}

// https://aticleworld.com/memcpy-vs-memmove/
void	*my_memcpy(void *dest, const void *src, unsigned int n)
{
	char *pDest = (char *)dest;
	const char *pSrc = (const char *)src;
	// return if pDest and pSrc is NULL
	if ((pDest == NULL) && (pSrc == NULL))
		return (NULL);
	while (n) //till n
	{
		//Copy byte by byte
		*(pDest++) = *(pSrc++);
		--n;
	}
	return (dest);
}