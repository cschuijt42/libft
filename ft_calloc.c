/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 13:37:59 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 13:37:59 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t size, size_t count)
{
	void			*memory;
	const size_t	maximum_value = -1;

	if (maximum_value / size < count || maximum_value / count < size)
		return (NULL);
	memory = malloc(size * count);
	if (memory)
		ft_bzero(memory, size * count);
	return (memory);
}
