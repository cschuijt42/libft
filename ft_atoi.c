/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:18:11 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 15:18:11 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_atoi(const char *string)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	while (string[i] == ' ' || string[i] == '\f' || string[i] == '\n' || \
			string[i] == '\r' || string[i] == '\t' || string[i] == '\v')
		i++;
	if (string[i] == '-' || string[i] == '+')
		sign = -1 * (string[i] - 44);
	else if (!ft_isdigit(string[i]))
		return (0);
	else
		sign = 1;
	result = 0;
	while (ft_isdigit(string[i]))
	{
		result *= 10;
		result += string[i] - 48;
		i++;
	}
	return (result * sign);
}
