/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:02:59 by sangchpa          #+#    #+#             */
/*   Updated: 2020/12/31 17:33:07 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
	
    if (fd < 0)
		return (void)0;

    if (n == -2147483648)
    {
        write(fd, "-", 1);
        write(fd, "2147483648", 10);
    }
    else if(n < 0)
    {
        write(fd, "-", 1);
        ft_putnbr_fd(n * -1, fd);
    }
    else
    {
        if (n >= 10)
            ft_putnbr_fd(n / 10, fd);
        
        c = (n % 10) + '0';
        write(fd, &c, 1);
    }
}

/*
Parameters | #1. 출력할 정수. #2. 쓰여질 파일디스크립터.
Return value | None
External functs. | write
Description | 정수 'n'을 주어진 파일디스크립터로 출력.
*/