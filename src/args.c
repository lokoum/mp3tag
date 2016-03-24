/*
** args.c for parameters check in /home/lokoum/prog/mp3tag/src
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 14:12:16 2016 Lucas Troncy
** Last update Thu Mar 24 14:43:13 2016 Lucas Troncy
*/

#include "mp3tag.h"

int	get_args(char **argv)
{
  int	fd;

  if (my_strncmp(argv[2], "--disp-tag", 10) == 0)
    {
      if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
	  my_putstr(2, "Cannot open the file !\n");
	  return (1);
	}
      get_tag(fd);
      return (0);
    }
  else if (my_strncmp(argv[2], "--set-tag", 9) == 0)
    {
      return (0);
    }
  else
    {
      my_putstr(2, "Wrong parameter\n\n");
      disp_usage();
      return (1);
    }
}
