/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:55:16 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:55:16 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (character + 32);
	else
		return (character);
}
