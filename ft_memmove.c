/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 01:05:26 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 01:05:26 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t	i;

	if (src < dest)
		return (ft_memcpy(dest, src, length));
	else
	{
		i = length;
		while (i > 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
		return (dest);
	}
}
