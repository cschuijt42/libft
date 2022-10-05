/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:37:56 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/04 16:41:59 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


// TODO: convert maxlen back to size_t later
int	ft_strnlen(char *s, unsigned int maxlen);

// TODO: convert maxlen back to size_t later
int	ft_strlen(char *s, unsigned int maxlen)
{
	unsigned int	count;

	count = 0;

	while (s)
	{
		count++;
		s++;
	}
	return (count);
}
