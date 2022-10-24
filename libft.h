/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:44:15 by cschuijt      #+#    #+#                 */
/*   Updated: 2022/10/24 17:01:38 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Returns the length of the given string. No NULL protection.
size_t	ft_strlen(const char *s);
// Strips whitespace and up to one +/- from a string and returns the first
// integer value if it can find one.
int		ft_atoi(const char *s);
// Returns 1 if c is an upper or lowercase letter.
int		ft_isalpha(int c);
// Returns 1 if c is a letter or a digit.
int		ft_isalnum(int c);
// Returns 1 if c is in the ascii table.
int		ft_isascii(int c);
// Returns 1 if c is a digit.
int		ft_isdigit(int c);
// Returns 1 if c is printable.
int		ft_isprint(int c);
// Turns uppercase letters into lowercase, returns c in all other cases.
int		ft_tolower(int c);
// Turns lowercase letters into uppercase, returns c in all other cases.
int		ft_toupper(int c);
// Returns a pointer to the first instance of c in s, or NULL if none found.
char	*ft_strchr(const char *s, int c);
// Returns a pointer to the last instance of c in s, or NULL if none found.
char	*ft_strrchr(const char *s, int c);
// Allocates and returns a string that is an exact copy of s.
char	*ft_strdup(const char *s);
// Sets n bytes of memory to c from pointer s.
void	*ft_memset(void *s, int c, size_t n);
// Sets n bytes of memory from pointer s to null bytes.
void	ft_bzero(void *s, size_t n);
// Returns a pointer to the first instance of c in n bytes of memory from s.
// No null byte limit.
void	*ft_memchr(const void *s, int c, size_t n);
// Compares two blocks of memory and returns s1 - s2 when they do not match.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// Copies n bytes of memory from src to dest. This one is overlap-safe.
void	*ft_memcpy(void *dest, const void *src, size_t n);
// Copies n bytes of memory from src to dest. This one is also overlap-safe.
void	*ft_memmove(void *dest, const void *src, size_t n);
// Allocates nmemb * size bytes of memory, and sets all those bytes to null.
void	*ft_calloc(size_t nmemb, size_t size);
// Compares two strings, returning s1 - s2 when they do not match.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// Copies string src to dest, not writing more than dstsize bytes, null
// inclusive. Return value is length of string it tried to write.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// Appends string src to dest, not checking or writing more than dstsize bytes.
// Safe to use on dst strings without a null terminator. Return value is
// length of string it tried to create.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// Finds the first occurrence of needle in haystack, not searching further than
// len bytes. If needle is empty, returns the entire haystack. If needle cannot
// be found, returns NULL.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

int		ft_put_nbr_base(size_t nbr, char *base);
#endif
