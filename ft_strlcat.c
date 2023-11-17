/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 01:23:30 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 01:23:30 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	const size_t	src_length = ft_strlen((char *) src);
	size_t			dest_length;
	size_t			i;

	dest_length = 0;
	while (dest_length < dest_size && dest[dest_length])
		dest_length++;
	if (dest_length == dest_size)
		return (dest_size + src_length);
	i = 0;
	while (dest_length + i < dest_size - 1 && src[i])
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
