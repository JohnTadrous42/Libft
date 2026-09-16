/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:14:33 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 19:59:59 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('C'));
// 	printf("%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii(0));
// 	printf("%d\n", ft_isascii('5'));
// 	printf("%d\n", ft_isascii('c'));
// 	return (0);
// }
