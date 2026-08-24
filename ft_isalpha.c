/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:10:59 by johtadro          #+#    #+#             */
/*   Updated: 2026/08/24 15:03:08 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha(97));
// 	printf("%d\n", ft_isalpha('9'));
// 	printf("%d\n", ft_isalpha(97));
// 	return (0);
// }
