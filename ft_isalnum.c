/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:28:45 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/24 15:03:13 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('C'));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum(0));
// 	printf("%d\n", ft_isalnum('5'));
// 	printf("%d\n", ft_isalnum('c'));
// 	return (0);
// }
