/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:27:44 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/25 15:13:01 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	size_t	ret;

// 	printf("========================================\n");
// 	printf("           TESTING FT_STRLCPY           \n");
// 	printf("========================================\n");

// 	/* Test 1: Full Copy (Fits completely) */
// 	char dst1[20] = "XXXXXXXXXX";
// 	ret = ft_strlcpy(dst1, "Hello 42", 20);
// 	printf("[Test 1 - Normal Copy]\n");
// 	printf("Result String : \"%s\"\n", dst1);      // Expected: "Hello 42"
// 	printf("Return Value  : %zu (src length: 8)\n\n", ret);

// 	/* Test 2: Truncation (Buffer too small) */
// 	char dst2[6] = "XXXXX";
// 	ret = ft_strlcpy(dst2, "Prague", 6);
// 	printf("[Test 2 - Truncation]\n");
// 	printf("Result String : \"%s\"\n", dst2);      // Expected: "Pragu" (5 chars + '\0')
// 	printf("Return Value  : %zu (src length: 6)\n\n", ret);

// 	/* Test 3: Size = 0 (Edge Case) */
// 	char dst3[10] = "Untouched";
// 	ret = ft_strlcpy(dst3, "Test", 0);
// 	printf("[Test 3 - Size is 0]\n");
// 	printf("Result String : \"%s\"\n", dst3);      // Expected: "Untouched"
// 	printf("Return Value  : %zu (src length: 4)\n", ret);

// 	return (0);
// }
