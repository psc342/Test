/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangchpa <sangchpa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:03:47 by sangchpa          #+#    #+#             */
/*   Updated: 2021/01/06 19:52:28 by sangchpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		s1_len;

	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && s1[s1_len - 1] && ft_strchr(set, s1[s1_len - 1]) != 0)
		s1_len--;
	p = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (p == 0)
		return (0);
	ft_strlcpy(p, s1, (s1_len + 1));
	return (p);
}
