/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:54:39 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/24 16:32:55 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	size_t	i;

	i = 1;
	if (!*str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strlen(""));
// 	printf("%d\n", ft_strlen("Hello"));
// 	printf("%d\n", ft_strlen("He\0llo"));
// }
