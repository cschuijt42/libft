/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:13:47 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 15:13:47 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *string, void (*function)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		function(i, string + i);
		i++;
	}
}
