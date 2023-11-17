/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 00:46:53 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 00:46:53 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Char manipulation functions

int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_isascii(int character);
int		ft_isprint(int character);

// String manipulation functions

size_t	ft_strlen(char *string);

char	*ft_strdup(const char *string);
char	*ft_substr(const char *string, unsigned int start, size_t length);
char	*ft_strjoin(const char *string_1, const char *string_2);
char	*ft_strtrim(const char *string, const char *set);

char	**ft_split(const char *string, char delimiter);

char	*ft_itoa(int number);

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size);

char	*ft_strchr(const char *string, int character);
char	*ft_strrchr(const char *string, int character);

int		ft_strncmp(const char *string_1, const char *string_2, size_t length);

char	*ft_strnstr(const char *haystack, const char *needle, size_t length);

char	*ft_strmapi(const char *string, char (*function)(unsigned int, char));
void	ft_striteri(char *string, void (*function)(unsigned int, char *));

// Memory manipulation functions

void	*ft_calloc(size_t size, size_t count);

void	*ft_memset(void *memory, int byte, size_t length);
void	ft_bzero(void *memory, size_t length);

void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t length);

void	*ft_memchr(const void *memory, int character, size_t length);

int		ft_memcmp(const void *memory_1, const void *memory_2, size_t length);

// Conversion functions

int		ft_atoi(const char *string);

int		ft_toupper(int character);
int		ft_tolower(int character);

// Write functions

void	ft_putchar_fd(char character, int fd);
void	ft_putstr_fd(char *string, int fd);
void	ft_putendl_fd(char *string, int fd);
void	ft_putnbr_fd(int number, int fd);

// Linked list functions

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*delete)(void*));
void	ft_lstclear(t_list **lst, void (*delete)(void*));

void	ft_lstiter(t_list *lst, void (*function)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*function)(void *), \
								void (*delete)(void *));
