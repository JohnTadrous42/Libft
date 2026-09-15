/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:19:02 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 18:54:20 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	delete_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	char	*text = strdup("Hello 42");
// 	t_list	*node = ft_lstnew(text);

// 	printf("Before delete: %s\n", (char *)node->content);
// 	ft_lstdelone(node, delete_content);
// 	printf("Node deleted successfully!\n");
// 	return (0);
// }
