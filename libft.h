/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:44:15 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/06 11:36:35 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

char	*ft_substr(char const *s, unsigned int start, unsigned int len);
int		ft_strnlen(char *s, unsigned int maxlen);
char	*ft_strjoin(char const *s1, char const *s2);
int		isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
#endif
