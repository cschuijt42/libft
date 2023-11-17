/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 16:21:14 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 16:21:14 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static unsigned int	number_string_length(int number);
static int			recursive_put_digit(char *string, long number);

char	*ft_itoa(int number)
{
	const unsigned int	string_length = number_string_length(number);
	char				*output;
	long				number_long;

	output = ft_calloc(1, string_length + 1);
	if (!output)
		return (output);
	if (number < 0)
	{
		output[0] = '-';
		number_long = number * -1;
	}
	else
		number_long = number;
	recursive_put_digit(output + string_length - 1, number_long);
	return (output);
}

static unsigned int	number_string_length(int number)
{
	unsigned int	length;
	long			number_long;

	length = 1;
	number_long = number;
	if (number < 0)
	{
		number_long *= -1;
		length++;
	}
	while (number_long >= 10)
	{
		length++;
		number_long /= 10;
	}
	return (length);
}

static int	recursive_put_digit(char *string, long number)
{
	*string = (number % 10) + 48;
	if (number >= 10)
		recursive_put_digit(string - 1, number / 10);
}
