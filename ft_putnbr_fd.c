/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:35:30 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:35:30 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	recursive_print_number(long number, int fd);

void	ft_putnbr_fd(int number, int fd)
{
	long	long_number;

	long_number = number;
	if (long_number < 0)
	{
		write(fd, "-", 1);
		long_number *= -1;
	}
	recursive_print_number(long_number, fd);
}

static void	recursive_print_number(long number, int fd)
{
	char	character;

	if (number >= 10)
		recursive_print_number(number / 10, fd);
	character = 48 + (number % 10);
	write(fd, &character, 1);
}
