/*
** lib.c for minimal lib in src/tools
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 13:22:27 2016 Lucas Troncy
** Last update Thu Mar 24 13:42:13 2016 Lucas Troncy
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
