/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:56 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:32:39 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
Function name | ft_lstdelone
Prototype | void ft_lstdelone(t_list *lst, void (*del)(void *));
Turn in files | -
Parameters | #1. free할 요소 #2. content를 삭제하는데 사용되는 함수의 주소
Return value | None
External functs. | free
Description | 매개변수로 요소를 가져오고 매개변수로 주어진 함수 
'del'을 적용시켜 요소의 content의 주소를 free하고
 난 뒤 요소를 free. 'next'의 주소는 free되지 않아야함.

*/