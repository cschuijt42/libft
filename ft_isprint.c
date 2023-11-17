/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:50:26 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:50:26 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int character)
{
	return (character >= 32 && character <= 126);
}
