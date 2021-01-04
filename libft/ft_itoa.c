/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:40 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/04 09:59:09 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	return (n == 0 ? 0 : 1 + get_len(n / 10));
}

char		*ft_itoa(int n)
{
	char			*ret;
	int				len;
	unsigned int	tmp;

	len = 1 + get_len(n / 10);
	if (n < 0)
	{
		++len;
		tmp = -n;
	}
	else
		tmp = n;
	if (!(ret = malloc(len + 1)))
		return (0);
	ret[len] = 0;
	if (n < 0)
		ret[0] = '-';
	ret[--len] = '0' + (tmp % 10);
	while (tmp /= 10)
		ret[--len] = '0' + (tmp % 10);
	return (ret);
}

/*
Parameters | #1. 변환할 정수.
Return value | 정수를 나타내는 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 인수로 받은 정수를 나타내는 문자열을 반환.
 음수 처리는 필수.
*/