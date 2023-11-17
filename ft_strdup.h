/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 13:45:35 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 13:45:35 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char			*new_string;
	const size_t	size = ft_strlen(string) + 1;

	new_string = ft_calloc(1, size);
	if (!new_string)
		return (new_string);
	ft_strlcpy(new_string, string, size);
	return (new_string);
}
