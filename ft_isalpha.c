/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:27:18 by bkaztaou          #+#    #+#             */
/*   Updated: 2022/10/20 11:55:55 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A');
}

static int	ft_islower(int c)
{
	return (c <= 'z' && c >= 'a');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
