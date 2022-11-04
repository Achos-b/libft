/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:55:53 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/04 17:57:44 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;
	int	needle_len;

	i = 0;
	j = 0;
	k = 0;
	needle_len = (int)ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (i < (int)len && haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			j++;
			k = i;
		}
		i++;
	}
	if (j == needle_len)
		return ((char *)&haystack[k - (needle_len - 1)]);
	return (NULL);
}
