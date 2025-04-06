/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:21:20 by romukena          #+#    #+#             */
/*   Updated: 2025/04/06 17:25:06 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *string1, const char *string2)
{
	int	i;

	i = 0;
	while (string1[i] == string2[i] && string1[i] && string2[i])
		i++;
	return (string1[i] - string2[i]);
}

/* int main(int argc, char ** argv)
{
  int  result;
 
  if ( argc != 3 )
  {
    printf( "Usage: %s string1 string2\n", argv[0] );
  }
  else
  {
 
    result = strcmp( argv[1], argv[2] );
 
    if ( result == 0 )
      printf( "\"%s\" is identical to \"%s\"\n", argv[1], argv[2] );
    else if ( result < 0 )
      printf( "\"%s\" is less than \"%s\"\n", argv[1], argv[2] );
    else
      printf( "\"%s\" is greater than \"%s\"\n", argv[1], argv[2] );
  }
} */