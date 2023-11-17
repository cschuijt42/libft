/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:54:10 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:54:10 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int character)
{
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	else
		return (character);
}
