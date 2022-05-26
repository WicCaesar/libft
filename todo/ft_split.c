/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:07:44 by cnascime          #+#    #+#             */
/*   Updated: 2022/05/13 20:35:15 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			**ft_split(char *str, char *charset);
static	int		shardcounter(char *altogether, char *forbidden);
static	int		isforbidden(char character, char *forbidden);
static	char		*superbonder(char *str, char *charset);
static	int		shardsize(char *altogether, char *forbidden);

// Glues ~shards~ in a single ~array~ again, filtering out forbidden characters.
char	**ft_split(char *str, char *charset)
{
	int		shard;
	int		count;
	char	**kintsugi;

	shard = 0;
	count = shardcounter(str, charset);
	kintsugi = malloc(sizeof(char *) * (count + 1));
	while (shard < count)
	{
		while (isforbidden(*str, charset))
			str++;
		kintsugi[shard] = superbonder(str, charset);
		while (!isforbidden(*str, charset))
			str++;
		shard++;
	}
	kintsugi[shard] = 0;
	return (kintsugi);
}

// Counts the amount of shards to reveal the array size.
static	int	shardcounter(char *altogether, char *forbidden)
{
	int	i;
	int	shardcount;

	i = 0;
	shardcount = 0;
	while (altogether[i] != '\0')
	{
		while (*altogether && isforbidden(*altogether, forbidden))
			altogether++;
		while (*altogether && !isforbidden(*altogether, forbidden))
			altogether++;
		if (*altogether || !isforbidden(*(altogether - 1), forbidden))
			shardcount++;
	}
	return (shardcount);
}

// Checks whether the character in question is in the forbidden list.
// 1-true if it's forbidden, 2-false if it's allowed.
static	int	isforbidden(char character, char *forbidden)
{
	int	i;

	i = 0;
	while (forbidden[i] != '\0')
	{
		if (character == forbidden[i])
			return (1);
		forbidden++;
	}
	if (character == '\0')
		return (1);
	return (0);
}

// Glues valid ~characters~ in a row in their own ~shard~, one by one.
static	char	*superbonder(char *altogether, char *forbidden)
{
	int		i;
	char	*shard;

	shard = malloc(sizeof(char) * (shardsize(altogether, forbidden) + 1));
	i = 0;
	while (!isforbidden(*altogether, forbidden))
	{
		shard[i] = *altogether;
		i++;
		altogether++;
	}
	shard[i] = '\0';
	return (shard);
}

// Just measures the necessary amount of bytes for memory allocation.
static	int	shardsize(char *altogether, char *forbidden)
{
	int	size;

	size = 0;
	while (!isforbidden(*altogether, forbidden))
	{
		size++;
		altogether++;
	}
	return (size);
}
