/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:48:22 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 17:39:34 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*last;

// 	printf("Last of empty: %p\n", ft_lstlast(head));
// 	ft_lstadd_front(&head, ft_lstnew("Ahmed"));
// 	ft_lstadd_front(&head, ft_lstnew("Mahmoud"));
// 	last = ft_lstlast(head);
// 	if (last)
// 		printf("Last node content: %s\n", (char *)last->content);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }