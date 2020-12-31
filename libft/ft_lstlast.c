/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:08 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/30 18:48:20 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
Function name | ft_lstlast
Prototype | t_list *ft_lstlast(t_list *lst);
Turn in files | -
Parameters | #1. 리스트의 시작
Return value | 리스트의 마지막 요소.
External functs. | None
Description | 리스트의 마지막 요소를 반환.
*/