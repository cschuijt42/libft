/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_functions.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 21:17:31 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/26 14:46:07 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	printf_nbr_b(int n, char *base, int fd)
{
	long			bl;
	int				i;
	unsigned int	un;

	i = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		un = -n;
		i++;
	}
	else
		un = n;
	bl = ft_strlen(base);
	if (un >= bl)
		printf_nbr_b(un / bl, base, fd);
	write(fd, &base[un % bl], 1);
	while (un >= bl)
	{
		un /= bl;
		i++;
	}
	return (i);
}

int	printf_nbr_ub(unsigned int n, char *base, int fd)
{
	long	bl;
	int		i;

	i = 1;
	bl = ft_strlen(base);
	if (n >= bl)
		printf_nbr_ub(n / bl, base, fd);
	write(fd, &base[n % bl], 1);
	while (n >= bl)
	{
		n /= bl;
		i++;
	}
	return (i);
}

int	printf_string(char *str, int fd)
{
	int	l;

	if (!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	l = ft_strlen(str);
	write(fd, str, l);
	return (l);
}

int	printf_char(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	printf_pointer(unsigned long n, int fd)
{
	unsigned long	bl;
	char			*base;
	int				i;

	base = "0123456789abcdef";
	i = 1;
	bl = ft_strlen(base);
	if (n >= bl)
		printf_pointer(n / bl, fd);
	write(fd, &base[n % bl], 1);
	while (n >= bl)
	{
		n /= bl;
		i++;
	}
	return (i);
}
