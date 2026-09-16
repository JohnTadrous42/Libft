/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:09:58 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:03:50 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (j < len && big [j] != '\0')
	{
		i = 0;
		n = j;
		while (big[n] && big [n] == little [i] && n < len)
		{
			i++;
			n++;
			if (little[i] == '\0')
				return ((char *)&big[n - i]);
		}
		j++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *largestring = "AABC";
// 	const char *smallstring = "ABC";
// 	char *ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 4);
// 	printf ("%s\n", ptr);
// 	return (0);
// }
