/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:17:00 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:01:10 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*to_upper_str(void *content)
// {
// 	char	*str = (char *)content;
// 	char	*res = ft_strdup(str);
// 	int		i = 0;

// 	if (!res)
// 		return (NULL);
// 	while (res[i])
// 	{
// 		res[i] = ft_toupper((unsigned char)res[i]);
// 		i++;
// 	}
// 	return (res);
// }

// int	main(void)
// {
// 	t_list	*orig_list = NULL;
// 	t_list	*mapped_list = NULL;
// 	t_list	*curr;

// 	// تجهيز القائمة الأصلية
// 	ft_lstadd_back(&orig_list, ft_lstnew(ft_strdup("prague")));
// 	ft_lstadd_back(&orig_list, ft_lstnew(ft_strdup("school42")));

// 	// إنشاء القائمة المحولة
// 	mapped_list = ft_lstmap(orig_list, to_upper_str, free);

// 	printf("--- Original List ---\n");
// 	curr = orig_list;
// 	while (curr)
// 	{
// 		printf("%s -> ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("NULL\n");

// 	printf("--- Mapped List ---\n");
// 	curr = mapped_list;
// 	while (curr)
// 	{
// 		printf("%s -> ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// 	printf("NULL\n");

// 	// تنظيف القائمتين بالكامل
// 	ft_lstclear(&orig_list, free);
// 	ft_lstclear(&mapped_list, free);

// 	return (0);
// }