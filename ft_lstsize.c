/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:51:27 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 18:16:12 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*node1;
// 	t_list	*node2;

// 	printf("Size of empty list: %d\n", ft_lstsize(head));
// 	node1 = ft_lstnew("Ahmed");
// 	ft_lstadd_front(&head, node1);
// 	printf("Size after 1 node:  %d\n", ft_lstsize(head));
// 	node2 = ft_lstnew("Mahmoud");
// 	ft_lstadd_front(&head, node2);
// 	printf("Size after 2 nodes: %d\n", ft_lstsize(head));
// 	free(node1);
// 	free(node2);
// 	return (0);
// }
