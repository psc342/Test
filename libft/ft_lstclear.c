/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:52 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:38 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	while (curr)
	{
		next = curr->next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	*lst = NULL;
}
/*
Function name | ft_lstclear
Prototype | void ft_lstclear(t_list **lst, void (*del)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 요소의 content를 삭제하는데 사용되는 함수의 주소.
Return value | None
External functs. | free
Description | 함수 'del'과 free(3)을 사용하여, 주어진 요소와 해당 요소의 모든 후속 요소를 삭제하고 free함.

*/