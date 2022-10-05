/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 16:33:34 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/05 16:35:48 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (true);
	if (c >= 65 && c <= 90)
		return (true);
	if (c >= 97 && c <= 122)
		return (true);
	return (false);
}
