/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:08:28 by romukena          #+#    #+#             */
/*   Updated: 2025/04/06 18:19:05 by romukena         ###   ########.fr       */
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
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t count);
void	*ft_memchr(const void *buf, int c, size_t count);
int	ft_memcmp(const void *buf1, const void *buf2, size_t count);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *str1, const char *str2);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t count);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
char	*ft_strstr(const char *str, const char *target);
char	*ft_strnstr(const char *str, const char *target, size_t len);
int	ft_strcmp(const char *string1, const char *string2);
int	ft_strncmp(const char *str1, const char *str2, size_t count);
int	ft_atoi(const char *str);


#endif