#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);
}

int main() {
  // Abre el descriptor de archivo prara el archivo "salida.txt".
  int fd = open("salida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
  // Escribe el carácter 'a' en el archivo.
  ft_putchar_fd('a', fd);

  // Verifica que la operación se realizó correctamente.
 
  // Cierra el descriptor de archivo.
  close(fd);

  return 0;
}