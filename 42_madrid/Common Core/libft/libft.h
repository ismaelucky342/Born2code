/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:58:26 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/30 18:41:43 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
/*Funciones de clasificación de carácteres */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/*Funciones de cadena */
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*Funciones de conversión de caracteres */
int		ft_toupper(int c);
int		ft_tolower(int c);

/*Funciones de búsqueda de caracteres en cadenas */
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

/*Funciones de comparación de cadenas y memoria */
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *dst, const void *str, size_t n);

/*Funciones de búsqueda de subcadenas */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* Función de conversión de cadena a entero */
int		ft_atoi(const char *str);

/*Funciones de asignación dinámica de memoria*/

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

/*Funciones de salida a descriptor de archivo*/

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*Categoría de iteración sobre cadenas*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/*Categoría de manipulación de cadenas*/

char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);

/*Categoría de conversión y manipulación de entero y cadenas*/

char	*ft_itoa(int n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*FUNCIONES BONUS*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **list, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *list, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del) (void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
