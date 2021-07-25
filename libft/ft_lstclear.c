#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst != NULL && *lst != NULL)
	{
		while (*lst != NULL)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}
