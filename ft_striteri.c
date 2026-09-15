/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:46:32 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 11:02:42 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	myfunc(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main()
// {
// 	char str[10] = "Hello!";
// 	printf("The result is %s\n", str);
// 	ft_striteri(str, myfunc);
// 	printf("The result is %s\n", str);
// 	return (0);
// }