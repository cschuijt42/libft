/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:34:13 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:34:13 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *string, int fd)
{
	write(fd, string, ft_strlen(string));
	write(fd, "\n", 1);
}
