/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:30 by romukena          #+#    #+#             */
/*   Updated: 2025/04/07 20:41:41 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int character)
{
	char	num;

	num = (char)character;
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}

/* int main(void)
{
	printf("%d", ft_isdigit('5'));
} */