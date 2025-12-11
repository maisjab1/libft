/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:37:20 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/03 12:44:06 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	int	i;
	int	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (little[i])
	{
		if (little[i] == big[j] && n)
		{
			i++;
			j++;
			n--;
		}
		else if (n)
		{
			j++;
			n--;
		}
		else
			return (NULL);
	}
	return ((char *)&big[j - i]);
}
