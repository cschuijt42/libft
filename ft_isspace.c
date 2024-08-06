/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/06 14:55:07 by cschuijt      #+#    #+#                 */
/*   Updated: 2024/08/06 14:55:07 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int character)
{
	return (character == '\f' || character == '\n' || \
			character == '\r' || character == '\t' || \
			character == '\v' || character == ' ');
}
