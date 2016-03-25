/*
** my_cpy.c for cpy func in /home/lokoum/prog/mp3tag/src/tools
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Fri Mar 25 15:07:13 2016 Lucas Troncy
** Last update Fri Mar 25 15:20:07 2016 Lucas Troncy
*/

char	*my_strncpy(char *d, char *s, int n)
{
  int	i;

  i = -1;
  while (s[++i] != 0 && i < n)
    d[i] = s[i];
  return (d);
}
