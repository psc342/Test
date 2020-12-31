/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:47 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:44 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == 0 || new == 0)
		return (void)0;
    new->next = *lst;
    *lst = new;
}
/*
Function name | ft_lstadd_front
Prototype | void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files | -
Parameters | #1. 첫 번째 링크 리스트의 포인터 주소. 
#2. 리스트에 추가되기 위한 요소의 포인터 주소.
Return value | None
External functs. | None
Description | 리스트의 시작부분에 요소 'new'를 추가.
*/