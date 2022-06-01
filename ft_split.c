/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:07:44 by cnascime          #+#    #+#             */
/*   Updated: 2022/06/01 13:08:30 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_shardcounter(char *altogether, char forbidden);
static int		ft_isforbidden(char character, char forbidden);
static char		*ft_superbonder(char *altogether, char forbidden);
static int		ft_shardsize(char *altogether, char forbidden);

// Glues ~shards~ in a single ~array~ again, filtering out forbidden characters.
char	**ft_split(char const *s, char c)
{
	int		shard;
	int		count;
	char	**kintsugi;

	shard = 0;
	count = ft_shardcounter(s, c);
	kintsugi = malloc(sizeof(char *) * (count + 1));
	if (!kintsugi)
	{
		free (kintsugi);
		return (NULL);
	}
	while (shard < count)
	{
		while (ft_isforbidden(*s, c))
			s++;
		kintsugi[shard] = ft_superbonder(s, c);
		while (!ft_isforbidden(*s, c))
			s++;
		shard++;
	}
	kintsugi[shard] = 0;
	return (kintsugi);
}

// Counts the amount of shards to reveal the array size.
static int	ft_shardcounter(char *altogether, char forbidden)
{
	int	i;
	int	shardcount;

	i = 0;
	shardcount = 0;
	while (altogether[i] != '\0')
	{
		while (*altogether && ft_isforbidden(*altogether, forbidden))
			altogether++;
		while (*altogether && !ft_isforbidden(*altogether, forbidden))
			altogether++;
		if (*altogether || !ft_isforbidden(*(altogether - 1), forbidden))
			shardcount++;
	}
	return (shardcount);
}

// Checks whether the character in question is forbidden.
// 1-true if it's forbidden, 2-false if it's allowed.
static int	ft_isforbidden(char character, char forbidden)
{
	int	i;

	i = 0;
	if (character == forbidden)
		return (1);
	if (character == '\0')
		return (1);
	return (0);
}

// Glues valid ~characters~ in a row in their own ~shard~, one by one.
static char	*ft_superbonder(char *altogether, char forbidden)
{
	int		i;
	char	*shard;

	shard = malloc(sizeof(char) * (ft_shardsize(altogether, forbidden) + 1));
	i = 0;
	while (!ft_isforbidden(*altogether, forbidden))
	{
		shard[i] = *altogether;
		i++;
		altogether++;
	}
	shard[i] = '\0';
	/* if (!shard)
	{
		free (shard);
		return (NULL);
	} adianta fazer isso nesse estágio ou deveria ser feito logo após malloc? */
	return (shard);
}

// Just measures the necessary amount of bytes for memory allocation.
static int	ft_shardsize(char *altogether, char forbidden)
{
	int	size;

	size = 0;
	while (!ft_isforbidden(*altogether, forbidden))
	{
		size++;
		altogether++;
	}
	return (size);
}
