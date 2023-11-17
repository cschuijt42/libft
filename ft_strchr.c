/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 13:52:11 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 13:52:11 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *string, int character)
{
	size_t	i;

	i = 0;
	while (string[i] && string[i] != character)
		i++;
	if (string[i] == character)
		return ((char *) string + i);
	else
		return (NULL);
}
