#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = ft_strdup("42 Prague");
	t_list	*node = ft_lstnew(str);

	printf("Node Content: %s\n", (char *)node->content);
	printf("Length: %zu\n", ft_strlen((char *)node->content));

	free(node->content);
	free(node);
	return (0);
}