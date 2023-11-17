/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:44:59 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:44:59 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	return ((character >= 'A' && character <= 'Z') || \
			(character >= 'a' && character <= 'z'));
}
