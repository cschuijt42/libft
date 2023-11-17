/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 14:12:50 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 14:12:50 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t			i;
	const size_t	needle_length = ft_strlen((char *) needle);

	if (needle_length == 0)
		return ((char *) haystack);
	if (needle_length > length)
		return (NULL);
	i = 0;
	while (i <= length - needle_length && haystack[i] \
			&& ft_strncmp(haystack + i, needle, needle_length) != 0)
		i++;
	if (ft_strncmp(haystack + i, needle, needle_length) == 0)
		return ((char *)haystack + i);
	else
		return (NULL);
}
