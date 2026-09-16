/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johtadro <johtadro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:09:13 by johtadro          #+#    #+#             */
/*   Updated: 2026/09/16 19:59:48 by johtadro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb > 0 && size > ((size_t) - 1) / nmemb)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	// Allocate memory for a number of items
// 	int numItems = 20;
// 	int *myArray = ft_calloc(numItems, sizeof(int));

// 	// Write into the memory
// 	for(int i = 0; i < numItems; i++) {
// 	myArray[i] = i + 1;
// 	}

// 	// Display the contents of the memory
// 	for(int i = 0; i < numItems; i++) {
// 	printf("%d ", myArray[i]);
// 	}

// 	// Free the memory
// 	free(myArray);
// 	myArray = NULL;
// }
