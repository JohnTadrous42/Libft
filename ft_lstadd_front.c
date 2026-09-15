/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:24:21 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 18:15:52 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head = NULL; // الليست لسه فاضية
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*current;

// 	// 1. نصنع أول عقدة ونحطها في الليست
// 	node1 = ft_lstnew("Ahmed");
// 	ft_lstadd_front(&head, node1);

// 	// 2. نصنع عقدة تانية ونحطها في أول الليست برضه
// 	node2 = ft_lstnew("Mahmoud");
// 	ft_lstadd_front(&head, node2);

// 	// 3. نطبع الليست من الأول للآخر لنرى الترتيب
// 	current = head;
// 	while (current != NULL)
// 	{
// 		printf("%s -> ", (char *)current->content);
// 		current = current->next; // نتحرك للعقدة التالية
// 	}
// 	printf("NULL\n");

// 	// تنظيف الذاكرة
// 	free(node1);
// 	free(node2);
// 	return (0);
// }