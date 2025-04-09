/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:08:28 by romukena          #+#    #+#             */
/*   Updated: 2025/04/10 00:58:14 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memchr(const void *buf, int c, size_t count);
int	ft_memcmp(const void *buf1, const void *buf2, size_t count);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
char	*ft_strnstr(const char *str, const char *target, size_t len);
int	ft_strncmp(const char *str1, const char *str2, size_t count);
int	ft_atoi(const char *str);
int	ft_isalpha(int character);
int	ft_isdigit(int character);
int	ft_isalnum(int character);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t num, size_t size);
/* Fonctions supplémentaires */
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);


#endif