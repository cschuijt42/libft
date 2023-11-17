/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:43:34 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:43:34 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(const char *string_1, const char *string_2)
{
	const size_t	str_1_length = ft_strlen(string_1);
	const size_t	str_2_length = ft_strlen(string_2);
	const char		*output = ft_calloc(1, str_1_length + str_2_length + 1);

	if (!output)
		return (output);
	ft_memcpy(output, string_1, str_1_length);
	ft_memcpy(output + str_1_length, string_2, str_2_length);
	return (output);
}
