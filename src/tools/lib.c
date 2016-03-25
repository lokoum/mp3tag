/*
** lib.c for minimal lib in src/tools
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 13:22:27 2016 Lucas Troncy
** Last update Fri Mar 25 15:06:55 2016 Lucas Troncy
*/

#include <unistd.h>

int	my_strlen(char *s)
{
  int	n;

  n = -1;
  while (s[++n] != 0);
  return (n);
}

void	my_putstr(int fd, char *s)
{
  write(fd, s, my_strlen(s));
}

void	my_putnstr(int fd, char *s, size_t n)
{
  int	i;

  i = -1;
  while (s[++i] != 0 && i < n)
    write(fd, &s[i], 1);
}

int	my_strncmp(char *s, char *a, int i)
{
  int	n;

  n = 0;
  while (s[n] != 0 && a[n] != 0 && n < i)
    {
      if (s[n] - a[n] != 0)
	return (s[n] - a[n]);
      ++n;
    }
  return (0);
}

void	my_bzero(void *s, size_t n)
{
  char	*_s;

  _s = s;
  while (n--)
    *_s++ = 0;
}
