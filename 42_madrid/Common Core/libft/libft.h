/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:58:26 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:23:58 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

// Funciones de clasificación de caracteres
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);

// Funciones de cadena
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);

// Funciones de conversión de caracteres
int     ft_toupper(int c);
int     ft_tolower(int c);

// Funciones de búsqueda de caracteres en cadenas
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);

// Funciones de comparación de cadenas y memoria
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

// Funciones de búsqueda de subcadenas
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);

// Función de conversión de cadena a entero
int     ft_atoi(const char *str);

#endif