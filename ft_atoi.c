/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:25:38 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/06 13:41:09 by cschuijt      ########   odam.nl         */
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
	long	i;

	i = 0;
	while (*str && ft_isspace(*str))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		// Do the thing with the minus signs
	}
	while (*str && ft_isdigit(*str))
	{
		// Do the thing with the numbers
	}
	return ((int) i);
}
