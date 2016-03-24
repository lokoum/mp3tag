/*
** error.c for handling errors in /home/lokoum/prog/mp3tag/src
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 13:15:17 2016 Lucas Troncy
** Last update Thu Mar 24 14:40:27 2016 Lucas Troncy
*/

#include "mp3tag.h"

void	disp_usage(void)
{
  my_putstr(1, "mp3tag by troncy_l alias cytron_l !\nversion: ");
  my_putstr(1, VERSION);
  my_putstr(1, "\nUsage: mp3tag --help\n");
  my_putstr(1, "Usage: mp3tag song.mp3 --set-tag\n");
  my_putstr(1, "Usage: mp3tag song.mp3 --disp-tag\n");
}
