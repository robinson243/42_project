/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 21:51:25 by romukena          #+#    #+#             */
/*   Updated: 2025/04/03 21:57:36 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = 0;
}

int main(void)
{
	
}