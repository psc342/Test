/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:01:40 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/06 11:31:53 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_len(int n)
{
	int	len;
	
	len = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n /10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char			*p;
	int				n_len;

	n_len = number_len(n);
	if (!(p = malloc(n_len + 1)))
		return (0);
	p[n_len] = '\0';
	if (n == -2147483648)
	{
		p[--n_len] = '8';
		n = n / 10;
	}
	if (n < 0)
	{
		p[0] = '-';
		n = n * -1;
	}
	else if (n == 0)
		p[0] = '0';
	while (n > 0)
	{
		p[--n_len] = '0' + (n % 10);
		n = n / 10;
	}
	return (p);
}


/*
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
*/

/*
Parameters | #1. 변환할 정수.
Return value | 정수를 나타내는 문자열. 할당 실패시 NULL.
External functs. | malloc
Description | malloc(3)을 할당하고 인수로 받은 정수를 나타내는 문자열을 반환.
 음수 처리는 필수.
*/