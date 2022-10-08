/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:25:38 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/08 13:04:40 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (true);
	if (c == '\f' || c == '\r' || c == ' ')
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	long			i;
	unsigned int	minuses;

	i = 0;
	minuses = 0;
	while (*str && ft_isspace(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			minuses++;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		i = i * 10;
		i = i + (*str - 48);
	}
	if (minuses % 2)
		i = i * -1;
	return ((int) i);
}
