/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:19:57 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/11 16:27:22 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned const char	*s1;
	unsigned const char	*s2;

	s1 = (unsigned const char *) str1;
	s2 = (unsigned const char *) str2;
	while (n--)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
