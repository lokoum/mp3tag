/*
** set_tag.c for set the TAG in /home/lokoum/prog/mp3tag/src
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 15:38:29 2016 Lucas Troncy
** Last update Fri Mar 25 15:33:36 2016 Lucas Troncy
*/

#include "mp3tag.h"

int	set_tag(int fd)
{
  int	end;
  t_tag	tag;

  my_bzero((void *)&tag, sizeof(t_tag));
  if (is_tag(fd))
    {
      if ((end = lseek(fd, 0, SEEK_END)) == -1 ||
	  lseek(fd, end - 128, SEEK_SET) == -1)
	return (false);
      my_putstr(1, "Metada found, it will be erase !\n");
    }
  else
    lseek(fd, 0, SEEK_END);
  if (ask_tag(&tag) == 1 || write_tag(fd, &tag) == 1)
    return (1);
  return (0);
}

int	ask_tag(t_tag *tag)
{
  char	tmp[1024] = {0};
  int	end;

  my_putstr(1, "title: ");
  if ((end = read(0, tmp, 1023)) == -1)
    return (1);
  tmp[end - 1] = 0;
  my_strncpy(tag->title, tmp, TITLE);
  my_putstr(1, "artist: ");
  if ((end = read(0, tmp, 1023)) == -1)
    return (1);
  tmp[end - 1] = 0;
  my_strncpy(tag->artist, tmp, ARTIST);
  my_putstr(1, "album: ");
  if ((end = read(end = 0, tmp, 1023)) == -1)
    return (1);
  tmp[end - 1] = 0;
  my_strncpy(tag->album, tmp, ALBUM);
  my_putstr(1, "year: ");
  if ((end = read(0, tmp, 1023)) == -1)
    return (1);
  tmp[end - 1] = 0;
  my_strncpy(tag->year, tmp, YEAR);
  my_putstr(1, "comment: ");
  if ((end = read(0, tmp, 1023)) == -1)
    return (1);
  tmp[end - 1] = 0;
  my_strncpy(tag->comment, tmp, COMMENT);
  return (0);
}

int	write_tag(int fd, t_tag *tag)
{
  tag->header[0] = 'T';
  tag->header[1] = 'A';
  tag->header[2] = 'G';
  if (write(fd, tag, sizeof(t_tag)) != 128)
    {
      my_putstr(2, "Error writting tag :(\n");
      return (1);
    }
  my_putstr(1, "the tag has been updated !\n");
  return (0);
}
