/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:58:26 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/12 15:38:51 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H
#include <stddef.h>

/*Funciones de clasificación de carácteres */
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum (int c);
int	ft_isascii (int c);
int	ft_isprint (int c);

/*funciones de cadena */
size_t	ft_strlen(const char *str);
void *ft_memset (void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);

/*Funciones de conversión de caracteres */
int	ft_toupper(int c);
int ft_tolower(int c);

/*Funciones de búsqueda de caracteres en cadenas */
char *strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

/*Funciones de comparación de cadenas y memoria */
int ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *dst, const void *str, size_t n);

/*Funciones de búsqueda de subcadenas */
char *ft_strnstr(const char *haystack, const char *needle, size_t len);


/* Función de conversión de cadena a entero */
int ft_atoi(const char *str);

/*Funciones de asignación dinámica de memoria*/

void	*ft_calloc(size_t count, size_t, size);
char	*ft_strdup(const char *s1);






#endif

