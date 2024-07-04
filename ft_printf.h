/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:38:07 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/26 14:44:46 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include "libft.h"

int		printf_nbr_b(int n, char *base, int fd);
int		printf_nbr_ub(unsigned int n, char *base, int fd);
int		printf_string(char *str, int fd);
int		printf_char(int c, int fd);
int		printf_pointer(unsigned long n, int fd);

#endif
