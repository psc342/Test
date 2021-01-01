/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:03 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/01 08:59:59 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == 0 || fd < 0)
		return (void)0;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
/*
Parameters | #1. 출력할 문자열. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 문자열 's'을 주어진 파일디스크립터로 출력.
*/