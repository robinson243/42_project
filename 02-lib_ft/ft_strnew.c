/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:23:03 by romukena          #+#    #+#             */
/*   Updated: 2025/04/09 12:29:42 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	dest = ft_memset(dest, '\0', size);
	return (dest);
}

/* int main() {
    char *str = ft_strnew(10);  // Allouer une chaîne de 10 caractères

    if (str == NULL) {
        printf("Échec de l'allocation mémoire.\n");
        return 1;
    }

    // Vérifier que tous les caractères sont initialisés à '\0'
    for (size_t i = 0; i < 10; i++) {
        if (str[i] != '\0') {
            printf("Erreur à l'index %zu, caractère: %c\n", i, str[i]);
            free(str);
            return 1;
        }
    }

    printf("La chaîne est allouée et initialisée à zéro.\n");

    // N'oublie pas de libérer la mémoire allouée
    free(str);

    return 0;
} */