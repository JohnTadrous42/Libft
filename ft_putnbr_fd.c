/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 22:15:34 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:02:51 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd(((n % 10) + 48), fd);
}

// int	main(void)
// {
// 	int	i = -2147483647;

// 	ft_putnbr_fd(i, 1);
// 	ft_putchar_fd('\n', 1);
// 	return(0);
// }