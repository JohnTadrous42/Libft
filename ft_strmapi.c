/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnwork <johnwork@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:53:04 by johnwork          #+#    #+#             */
/*   Updated: 2026/09/15 09:45:56 by johnwork         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char myfunc(unsigned int i, char str)
// {
// 	printf("My inner function: index = %d and %c\n", i, str);
// 	return ('*');
// }

// int main()
// {
//  	char str[10] = "hello";
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmapi(str, myfunc);
//  	printf("The result is %s\n", result);
//  	return (0);
// }