/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_better_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:33:29 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/04 02:30:48 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// I made this split during Turbo C09. It's better than libft's split because
// it allows more than one splitting character (that I call "forbidden").
// It does not, however, free in case of an error.

// #include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		shardcounter(char *altogether, char *forbidden);
int		isforbidden(char character, char *forbidden);
char	*superbonder(char *str, char *charset);
int		shardsize(char *altogether, char *forbidden);

// int	main(void)
// {
// 	int		i;
// 	char	*altogether;
// 	char	*forbidden;
// 	char	**shard;

// 	i = 0;
// 	altogether = "123PIM567PIM91011AIPIM131415IP171819IM";
// 	forbidden = "PIM";
// 	shard = ft_split(altogether, forbidden);
// 	while (shard[i] != 0)
// 	{
// 		printf("%s", shard[i]);
// 		printf("\n");
// 		i++;
// 	}
// 	return (0);
// }

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
int	shardcounter(char *altogether, char *forbidden)
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
int	isforbidden(char character, char *forbidden)
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
char	*superbonder(char *altogether, char *forbidden)
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
int	shardsize(char *altogether, char *forbidden)
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
