/*
** main.c for mp3tag main func in /home/lokoum/prog/mp3tag/src
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 12:59:26 2016 Lucas Troncy
** Last update Thu Mar 24 14:37:35 2016 Lucas Troncy
*/

#include "mp3tag.h"

int	main(int argc, char **argv)
{
  if (argc != 3)
    {
      disp_usage();
      return (0);
    }
  if (get_args(argv))
    return (1);
  return (0);
}
