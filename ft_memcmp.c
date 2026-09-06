/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 10:30:32 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/06 12:38:38 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*pt1;
	const unsigned char	*pt2;

	i = 0;
	pt1 = (const unsigned char *)s1;
	pt2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (pt1[i] != pt2[i])
			return (pt1[i] - pt2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "aBCD";
// 	char	s2[] = "ABCc";
// 	int		re;

// 	re = ft_memcmp(s1, s2, 1);
// 	printf("%d\n", re);
// 	return (0);
// }
