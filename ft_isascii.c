/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:48:17 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:48:17 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int character)
{
	return (character >= 0 && character <= 127);
}
