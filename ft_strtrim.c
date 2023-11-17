/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:43:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:43:56 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(const char *string, const char *set)
{
	size_t			i;
	size_t			substring_start;
	size_t			substring_length;
	const size_t	string_length = ft_strlen((char *) string);

	i = 0;
	while (i < string_length && ft_strchr(set, string[i]))
		i++;
	if (i == string_length)
		return (ft_calloc(1, 1));
	substring_start = i;
	i = string_length - 1;
	while (i > substring_start && ft_strchr(set, string[i]))
		i--;
	substring_length = i - substring_start;
	return (ft_substr(string, substring_start, substring_length));
}
