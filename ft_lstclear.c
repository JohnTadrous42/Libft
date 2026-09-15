/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:54:48 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 19:04:53 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_node;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*head = ft_lstnew(strdup("Node 1"));
// 	head->next = ft_lstnew(strdup("Node 2"));
// 	head->next->next = ft_lstnew(strdup("Node 3"));

// 	printf("Before clear, head is: %p\n", (void *)head);
// 	ft_lstclear(&head, free);
// 	printf("After clear, head is: %p\n", (void *)head);
// 	return (0);
// }
