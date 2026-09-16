/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:38:27 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 20:00:16 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = (n / 10);
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = get_num_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = (num / 10);
	}
	return (str);
}

// int	main(void)
// {
// 	char	*nbr;

// 	nbr = ft_itoa(-2147483648);
// 	if (!nbr)
//         return (1);
//     printf("%s\n", nbr);
// 	free(nbr);
// }