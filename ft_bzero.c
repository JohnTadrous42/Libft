/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 16:35:12 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/24 16:44:25 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	strold[] = "Hello 42 Prague";

// 	printf("before: %s\n", strold);
// 	ft_bzero(strold + 5, 4);
// 	printf("after: %s\n", strold);
// 	return (0);
// }
