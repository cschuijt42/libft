/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:54:42 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/05 14:23:29 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


// TODO: Update len to size_t later!
char	*ft_substr(char const *s, unsigned int start, unsigned int len);

// TODO: Update len to size_t later!
char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	total_length;
	char			*pointer;
	unsigned int	i;

	total_length = ft_strlen(s);
	while (start > 0 && s)
	{
		s++;
		start--;
	}
	if ((total_length - start) < len)
		len = (total_length - start);
	pointer = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len && s[i])
	{
		pointer[i] = s[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
