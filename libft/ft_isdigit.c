/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:30 by romukena          #+#    #+#             */
/*   Updated: 2025/04/20 13:10:16 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int character)
{
	if ((unsigned char)character >= '0' && (unsigned char)character <= '9')
		return (1);
	return (0);
}

/* int main(void)
{
	printf("%d", ft_isdigit('5'));
} */