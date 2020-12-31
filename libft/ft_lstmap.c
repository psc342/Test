/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:12 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/30 18:50:02 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (result);
}
/*
Function name | ft_lstmap
Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 리스트에 반복적으로 사용되는 함수의 주소 #3. 필요한 경우 요소의 content를 삭제하기위해 사용되는 함수의 주소
Return value | 새로운 리스트. 할당 실패시 NULL.
External functs. | malloc, free
Description | 리스트 'lst'를 반복하여 각 요소의 content에 함수 'f'를 적용. 함수 'f'를 연속적으로 적용시켜 새로운 리스트를 만듬. 필요한 경우 함수 'del'은 요소의 content를 삭제하는데 사용됨.

*/