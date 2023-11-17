/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:43:12 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:43:12 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(const char *string, unsigned int start, size_t length)
{
	const size_t	string_length = ft_strlen(string);
	char			*output;

	if (start > string_length || length == 0)
		return (ft_calloc(1, 1));
	if (string_length - start < length)
		length = string_length - start;
	output = ft_calloc(1, length + 1);
	if (!output)
		return (output);
	ft_memcpy(output, string + start, length);
	return (output);
}
