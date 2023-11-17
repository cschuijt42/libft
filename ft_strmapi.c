/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:10:11 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 15:10:11 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strmapi(const char *string, char (*function)(unsigned int, char))
{
	const size_t	string_length = ft_strlen((char *) string);
	char			*output;
	size_t			i;

	output = ft_calloc(1, string_length + 1);
	if (!output)
		return (output);
	i = 0;
	while (i < string_length)
	{
		output[i] = function(i, string[i]);
		i++;
	}
	return (output);
}
