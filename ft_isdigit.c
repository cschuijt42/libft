/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:44:27 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:44:27 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int character)
{
	return (character >= '0' && character <= '9');
}
