/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:06:51 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:06:51 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *string_1, const char *string_2, size_t length)
{
	size_t	i;
	int		difference;

	i = 0;
	while (i < length && string_1[i] && string_2[i] \
			&& string_1[i] == string_2[i])
		i++;
	return ((unsigned char)string_1[i] - (unsigned char)string_2[i]);
}
