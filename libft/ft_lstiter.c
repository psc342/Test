/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:00 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:40 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
Function name | ft_lstiter
Prototype | void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files | -
Parameters | #1. 요소의 포인터 주소 #2. 리스트에 반복적으로 사용되는 함수의 주소
Return value | None
External functs. | None
Description | 리스트 'lst'를 반복하여 각 요소의 content에 함수 'f'를 적용시킴.
*/