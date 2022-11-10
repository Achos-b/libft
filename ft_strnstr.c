/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:55:53 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/11/10 06:01:48 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	needle_len;

	i = 0;
	j = 0;
	k = 0;
	if ((int)len < 0)
		len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (i < len && haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			j++;
			k = i;
		}
		else
			j = 0;
		i++;
	}
	if (j == needle_len)
		return ((char *)&haystack[k - (needle_len - 1)]);
	return (NULL);
}
