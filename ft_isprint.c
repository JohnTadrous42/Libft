/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:35:05 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:00:07 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(31));
// 	printf("%d\n", ft_isprint(128));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", ft_isprint('c'));
// 	return (0);
// }
