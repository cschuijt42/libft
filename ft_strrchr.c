/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 13:56:15 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 13:56:15 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	size_t	i;

	i = ft_strlen((char *) string);
	if (character == 0)
		return ((char *) string + i);
	while (i > 0 && string[i] != character)
		i--;
	if (string[i] == character)
		return ((char *) string + i);
	else
		return (NULL);
}
