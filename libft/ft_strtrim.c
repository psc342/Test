/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:47 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/04 16:26:40 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	match_test(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*p;

	if (s1 == 0 || set == 0)
		return(0);
	while (match_test(*s1, set))
		s1++;
	len = ft_strlen((char*)s1);
	while (len - 1 >= 0 && match_test(s1[len - 1], set))
		len--;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (0);
	ft_strlcpy(p, (char *)s1, (len + 1));
	return (p);
}
