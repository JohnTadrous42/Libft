/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 13:02:11 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:01:38 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	if (ptrdest > ptrsrc)
	{
		while (n > 0)
		{
			n--;
			ptrdest[n] = ptrsrc[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int	main(void)
// {
// 	printf("=== TEST 1: dest > src (Move Forward) ===\n");
// 	char str1[] = "0123456789";
// 	printf("Before: %s\n", str1);
// 	ft_memmove(str1 + 2, str1, 4);
// 	// Expected: "0101236789"
// 	printf("After : %s\n\n", str1);
// 	printf("=== TEST 2: dest < src (Move Backward) ===\n");
// 	char str2[] = "0123456789";
// 	printf("Before: %s\n", str2);
// 	ft_memmove(str2, str2 + 2, 4);
// 	// Expected: "2345456789"
// 	printf("After : %s\n\n", str2);

// 	printf("=== TEST 3: No Overlap (Separate Buffers) ===\n");
// 	char src[] = "Hello 42";
// 	char dest[20] = "XXXXXXXXXX";
// 	printf("Before dest: %s\n", dest);
// 	ft_memmove(dest, src, 8);
// 	// Expected: "Hello 42XX"
// 	printf("After dest : %s\n", dest);

// 	return (0);
// }
