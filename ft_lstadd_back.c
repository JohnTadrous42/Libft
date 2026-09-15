/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:41:43 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 18:14:18 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*curr;

// 	ft_lstadd_back(&head, ft_lstnew("First"));
// 	ft_lstadd_back(&head, ft_lstnew("Second"));
// 	ft_lstadd_back(&head, ft_lstnew("Third"));
// 	curr = head;
// 	while (curr)
// 	{
// 		printf("%s -> ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("NULL\n");
// 	return (0);
// }