/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschuijt <cschuijt@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 23:07:21 by cschuijt      #+#    #+#                 */
/*   Updated: 2023/11/17 23:07:21 by cschuijt      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*function)(void *), \
								void (*delete)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	while (lst)
	{
		new_content = function(lst->content);
		if (!new_content)
		{
			ft_lstclear(new_list, delete);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			free(new_content);
			ft_lstclear(new_list, delete);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
