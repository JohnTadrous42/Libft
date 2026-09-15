/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:06:53 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 19:15:15 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("Value: %s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*head = ft_lstnew("Apple");
// 	head->next = ft_lstnew("Banana");
// 	head->next->next = ft_lstnew("Cherry");

// 	ft_lstiter(head, print_content);
// 	free(head->next->next);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }
