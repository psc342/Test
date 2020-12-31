/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:44 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/30 18:48:44 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	new->next = last->next;
	last->next = new;
}

/*
Function name | ft_lstadd_back
Prototype | void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files | -
Parameters | #1. 첫 번째 연결리스트의 포인터 주소 #2. 요소가 될 포인터 주소
Return value | None
External functs. | None
Description | 리스트의 끝에 'new' 요소를 추가.
*/