/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:22:24 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:22:24 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *memory, int character, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && \
				*(unsigned char *)(memory + i) != (unsigned char) character)
		i++;
	if (i == length)
		return (NULL);
	if (*(unsigned char *)(memory + i) == (unsigned char) character)
		return ((void *) memory + i);
	else
		return (NULL);
}
