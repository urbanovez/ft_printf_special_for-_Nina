/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:21:54 by ttawna            #+#    #+#             */
/*   Updated: 2019/11/08 23:19:48 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free2(char **s1, char **s2)
{
	char	*str;
	int		i;
	int		j;
	char	*p;
	char	*p1;

	i = 0;
	j = 0;
	p = *s1;
	p1 = *s2;
	str = (char *)malloc(sizeof(*str) * (ft_strlen(*s1) + ft_strlen(*s2) + 1));
	while ((*s1)[i])
	{
		str[i] = (*s1)[i];
		i++;
	}
	while ((*s2)[j])
	{
		str[i + j] = (*s2)[j];
		j++;
	}
	str[i + j] = '\0';
	ft_strdel(&p);
	ft_strdel(&p1);
	return (str);
}
