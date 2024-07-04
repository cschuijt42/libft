/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 11:14:17 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/28 14:42:34 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include "ft_printf.h"

static int	printf_replace_percent(const char *str, va_list valist, int fd)
{
	str++;
	if (*str == 'c')
		return (printf_char(va_arg(valist, int), fd));
	if (*str == 's')
		return (printf_string(va_arg(valist, char *), fd));
	if (*str == 'p')
	{
		write(fd, "0x", 2);
		return (2 + printf_pointer(va_arg(valist, unsigned long), fd));
	}
	if (*str == 'x')
		return (printf_nbr_ub(va_arg(valist, long), "0123456789abcdef", fd));
	if (*str == 'X')
		return (printf_nbr_ub(va_arg(valist, long), "0123456789ABCDEF", fd));
	if (*str == 'd' || *str == 'i')
		return (printf_nbr_b(va_arg(valist, int), "0123456789", fd));
	if (*str == 'u')
		return (printf_nbr_ub(va_arg(valist, unsigned int), "0123456789", fd));
	if (*str == '%')
	{
		write(fd, "%", 1);
		return (1);
	}
	return (-1);
}

int	printf_loop(const char *str, va_list valist, int fd)
{
	int	i;
	int	j;

	i = 0;
	while (*str)
	{
		if (*str == '%')
		{
			j = printf_replace_percent(str, valist, fd);
			if (j < 0)
				str++;
			else
			{
				str += 2;
				i += j;
			}
		}
		else
		{
			i += write(fd, str, 1);
			str++;
		}
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list		valist;
	int			i;

	va_start(valist, str);
	i = printf_loop(str, valist, 1);
	va_end(valist);
	return (i);
}

int	ft_dprintf(int fd, const char *str, ...)
{
	va_list	valist;
	int		i;

	va_start(valist, str);
	i = printf_loop(str, valist, fd);
	va_end(valist);
	return (i);
}
