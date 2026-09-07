/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 17:19:14 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/07 17:33:35 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc((i + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s1[i] = join[j];
		i++;
		j++;
	}

}
