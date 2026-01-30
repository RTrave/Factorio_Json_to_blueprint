#include <stddef.h>
#include "../../../lib/hdr/lst.h"

bool	lst_to_obj(void *dst, lst_t *lst, size_t (*get_len)(void*), size_t (*get_size)(void*),
	bool (*alloc)(void*, size_t, size_t), void (*cpy)(void*, void*, size_t, size_t, size_t))
{
	lst_t	*lst_head = lst;
	size_t	len = 0;
	while (lst != NULL)
	{
		if (lst->content != NULL)
			len += get_len(lst->content);
		lst = lst->next;
	}
	if (len == 0)
		return (0);
	size_t size = get_size(lst_head->content);
	if (alloc(dst, len, size) == 1)
		return (1);
	lst = lst_head;
	size_t	i = 0;
	while (lst != NULL)
	{
		if (lst->content != NULL)
		{
			len = get_len(lst->content);
			cpy(dst, lst->content, i, len, size);
			i += len;
		}
		lst = lst->next;
	}
	return (0);
}
