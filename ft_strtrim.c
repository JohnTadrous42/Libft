/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:06:59 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/09 21:20:08 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = (ft_strlen(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start] || start == end)
		return (ft_strdup(""));
	end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

// int	main(void)
// {
// 	char	str[] = "b Z2oO Hello world! hZ2Oo";
// 	char	set[] = "b Z2oOh";
// 	char	*result;
//	if (start > end)
//		return (ft_substr(s1, start, 0));
// 	result = ft_strtrim(str, set);
// 	printf("%s\n", result); //Hello world!
// 	return (0);
// }