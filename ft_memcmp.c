/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:28:16 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:28:16 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *memory_1, const void *memory_2, size_t length)
{
	unsigned char	*pointer_1;
	unsigned char	*pointer_2;
	size_t			i;

	i = 0;
	pointer_1 = memory_1;
	pointer_2 = memory_2;
	while (i < length && pointer_1[i] == pointer_2[i])
		i++;
	return (pointer_1[i] - pointer_2[i]);
}
