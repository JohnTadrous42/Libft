/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:30:20 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/07 16:29:33 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	if (start >= i)
		return (ft_strdup(""));
	if (len > (i - start))
		len = i - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	str[] = "Hello 42 World";
// 	char	*subptr;

// 	subptr = ft_substr(str , 6, 8);
// 	printf("%s\n", subptr);
// 	free(subptr);
// 	return (0);
// }
