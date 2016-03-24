/*
** is_tag.c for check if TAG in /home/lokoum/prog/mp3tag/src
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 13:25:58 2016 Lucas Troncy
** Last update Thu Mar 24 15:37:54 2016 Lucas Troncy
*/

#include "mp3tag.h"

bool	is_tag(int fd)
{
  int	end;
  char	tag[3];

  if ((end = lseek(fd, 0, SEEK_END)) == -1 ||
      lseek(fd, end - 128, SEEK_SET) == -1)
    return (false);
  if (read(fd, tag, HEADER) != HEADER)
    return (false);
  if (my_strncmp(tag, TAG, 3) == 0)
    return (true);
  else
    return (false);
}

int	get_tag(int fd)
{
  int	end;
  t_tag	tag;

  if (!is_tag(fd))
    return (my_putstr(2, "no TAG found\n"), 1);
  if ((end = lseek(fd, 0, SEEK_END)) == -1 ||
      lseek(fd, end - 128, SEEK_SET) == -1)
    return (my_putstr(2, "problem reading TAG\n"), 1);
  if (read(fd, &tag, 128) != 128)
    return (1);
  close(fd);
  disp_tag(tag);
  return (0);
}

void	disp_tag(t_tag tag)
{
  my_putstr(1, "title: ");
  my_putstr(1, tag.title);
  my_putstr(1, "\n");
  my_putstr(1, "artist: ");
  my_putstr(1, tag.artist);
  my_putstr(1, "\n");
  my_putstr(1, "album: ");
  my_putstr(1, tag.album);
  my_putstr(1, "\n");
  my_putstr(1, "year: ");
  my_putstr(1, tag.year);
  my_putstr(1, "\n");
  my_putstr(1, "comment: ");
  my_putstr(1, tag.comment);
  my_putstr(1, "\n");
}
