/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:17 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/30 18:44:10 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *p;

    p = (t_list *)malloc(sizeof(t_list));
    if (p == 0)
        return (0);
    p->content = content;
    p->next = 0;
    return (p);
    
    
}
/*
Function name | ft_lstnew
Prototype | t_list *ft_lstnew(void *content);
Turn in files | -
Parameters | #1. 새로운 요소를 만들 content.
Return value | 새로운 요소.
External functs. | malloc
Description | malloc(3)을 할당하고 새로운 요소를 반환.
 변수 'content'는 매개변수 'content'의 값에 
 따라 초기화된다. 변수 'next'는 NULL로 초기화된다.
*/