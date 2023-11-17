/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 01:15:17 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 01:15:17 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;

	if (dest_size == 0)
		return (ft_strlen((char *) src));
	i = 0;
	while (i < dest_size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size)
		dest[i] = '\0';
	return (ft_strlen((char *) src));
}
