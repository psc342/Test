/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:50 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/01 08:58:18 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    if	(fd < 0)
		return (void)0;
	write(fd, &c, 1);
}

/*
Parameters | #1. 출력할 문자. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자 'c'를 주어진 파일디스크립터로 출력.
*/