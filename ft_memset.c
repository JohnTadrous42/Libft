/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:10:29 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/07 13:07:40 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	strold[] = "Hello 42 Prague";
// 	size_t	n;

// 	n = 0;
// 	while (strold[n])
// 		n++;
// 	printf("before: %s\n", strold);
// 	ft_memset(strold, '*', n);
// 	printf("after: %s\n", strold);
// 	return (0);
// }
