/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:21 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 11:09:10 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
Function name | ft_lstsize
Prototype | int ft_lstsize(t_list *lst);
Turn in files | -
Parameters | #1. 리스트의 시작.
Return value | 리스트의 길이.
External functs. | None
Description | 리스트의 요소의 갯수를 셈.
*/