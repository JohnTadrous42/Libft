/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:27:48 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/27 15:47:32 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	total_len;

	i = 0;
	j = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size == 0)
		return (srclen);
	while (dst[i] != '\0' && i < size)
		i++;
	if (i >= size)
		return (size + srclen);
	total_len = srclen + i;
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total_len);
}

//  strlcat cat after dest and return srclen + destlen
// but if size is zero return srclen
// int	main(void)
// {
// 	char buf[20] = "Hello ";
// 	size_t ret;

// 	// تيست 1: دمج عادي
// 	ret = ft_strlcat(buf, "World!", sizeof(buf));
// 	printf("dst: \"%s\" | ret: %zu\n", buf, ret);

// 	// تيست 2: الـ buffer صغير (قص النص)
// 	char buf2[10] = "Hello ";
// 	ret = ft_strlcat(buf2, "World!", sizeof(buf2));
// 	printf("dst: \"%s\" | ret: %zu\n", buf2, ret);

// 	// تيست 3: size = 0
// 	char buf3[10] = "Hello";
// 	ret = ft_strlcat(buf3, "World", 0);
// 	printf("ret: %zu\n", ret); // المفروض: 5 (طول src)

// 	return (0);
// }
