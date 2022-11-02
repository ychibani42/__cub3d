/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:27:38 by ychibani          #+#    #+#             */
/*   Updated: 2022/09/10 13:07:36 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	__in_ascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
