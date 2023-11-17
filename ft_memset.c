/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:59:44 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:59:44 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *memory, int byte, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		*(char *)(memory + i) = byte;
		i++;
	}
	return (memory);
}
