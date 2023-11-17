/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 16:40:10 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 16:40:10 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static unsigned int	substring_count(const char *string, char delimiter);
static unsigned int	length_until_delimiter(const char *string, char delimiter);
static void			*cleanup_array(char **array);

char	**ft_split(const char *string, char delimiter)
{
	const unsigned int	substrings = substring_count(string, delimiter);
	char				**array;
	size_t				i;
	size_t				position;

	array = ft_calloc(sizeof(char *), substrings + 1);
	if (!array)
		return (array);
	i = 0;
	position = 0;
	while (i < substrings)
	{
		while (string[position] == delimiter)
			position++;
		array[i] = ft_substr(string, position, length_until_delimiter(\
												string + position, delimiter));
		if (!array[i])
			return (cleanup_array(array));
		i++;
		position += length_until_delimiter(string + position, delimiter);
	}
	return (array);
}

static unsigned int	substring_count(const char *string, char delimiter)
{
	unsigned int	substrings;
	size_t			i;

	substrings = 0;
	i = 0;
	while (string[i])
	{
		while (string[i] && string[i] == delimiter)
			i++;
		if (string[i])
		{
			substrings++;
			while (string[i] && string[i] != delimiter)
				i++;
		}
	}
	return (substrings);
}

static unsigned int	length_until_delimiter(const char *string, char delimiter)
{
	unsigned int	length;

	length = 0;
	while (string[length] && string[length] != delimiter)
		length++;
	return (length);
}

static void	*cleanup_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}
