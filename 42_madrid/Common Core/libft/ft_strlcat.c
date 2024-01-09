#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    i = 0;
    while (dst[i] && i < size)
        i++;

    j = 0;
    while (src[j] && i + j + 1 < size)
    {
        dst[i + j] = src[j];
        j++;
    }

    if (i < size)
    {
        dst[i + j] = '\0';
    }
    else
    {
        // Truncar la cadena si el tamaño del búfer es menor que la longitud total
        dst[size - 1] = '\0';
        return size;
    }

    return dst_len + src_len;
}


/*COMENTARIOS*/
/*llamamos al strlen del destino y origen para calcular su tamaño y los almacena*/
/*luego mientras i mas j mas 1 (por el nulo) sean menores al size j recorre el origen*/
/*se encuentra la posicion en que termina la cadena destino*/