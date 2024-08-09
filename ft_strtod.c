/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtod.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/08 16:09:04 by cschuijt      #+#    #+#                 */
/*   Updated: 2024/08/08 16:09:04 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

static double	parse_radix(char **str)
{
	size_t	i;
	int		sign;
	double	result;

	i = 0;
	if ((*str)[i] == '-' || (*str)[i] == '+')
	{
		sign = -1 * ((*str)[i] - 44);
		i++;
	}
	else if (!ft_isdigit((*str)[i]))
		return (0.0f);
	else
		sign = 1;
	result = 0.0f;
	while (ft_isdigit((*str)[i]))
	{
		result *= 10;
		result += (*str)[i] - 48;
		i++;
	}
	(*str) += i;
	return (result * sign);
}

static double	parse_decimal(char **str, bool negative)
{
	size_t	i;
	double	result;

	i = 0;
	result = 0.0f;
	if (!ft_isdigit((*str)[i]))
		return (result);
	while (ft_isdigit((*str)[i]))
	{
		result *= 10;
		result += (*str)[i] - 48;
		i++;
	}
	(*str) += i;
	while (i)
	{
		result /= 10;
		i--;
	}
	if (negative)
		result *= -1;
	return (result);
}

double	ft_strtod(char *str, char **pointer)
{
	double	result;
	bool	negative;

	while (ft_isspace(*str))
		str++;
	negative = *str == '-';
	result = 0.0f;
	result = parse_radix(&str);
	if (*str == '.')
	{
		str++;
		result += parse_decimal(&str, negative);
	}
	if (pointer)
		*pointer = str;
	return (result);
}
