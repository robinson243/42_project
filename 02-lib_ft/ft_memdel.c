/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:26:18 by romukena          #+#    #+#             */
/*   Updated: 2025/04/09 12:23:47 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

/* int main() {
    // 1. Allouer de la mémoire (par exemple un tableau de 10 caractères)
    char *str = malloc(10 * sizeof(char));

    // Vérifier si l'allocation a réussi
    if (str == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    // 2. Afficher l'adresse avant de libérer la mémoire
    printf("Avant ft_memdel: %p\n", (void *)str);

    free(str);  // Libération de la mémoire
    str = NULL; // Mise à NULL du pointeur

    // 4. Afficher l'adresse après la libération
    printf("Après ft_memdel: %p\n", (void *)str);

    return 0;
} */