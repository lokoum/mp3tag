/*
** mp3tag.h for mp3tag header in /home/lokoum/prog/mp3tag/include
** 
** Made by Lucas Troncy
** Login   <troncy_l@epitech.net>
** 
** Started on  Thu Mar 24 13:01:43 2016 Lucas Troncy
** Last update Thu Mar 24 16:41:28 2016 Lucas Troncy
*/

#ifndef MP3TAG_H_
# define MP3TAG_H_
# ifndef VERSION
#  define VERSION ("0.1")
# endif /* !VERSION */
# ifndef TAG
#  define TAG ("TAG")
# endif /* !TAG */

# include <unistd.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef enum	s_len
{
  HEADER = 3,
  TITLE = 30,
  ARTIST = 30,
  ALBUM = 30,
  YEAR = 4,
  COMMENT = 28,
  IS_TRACK = 1,
  TRACK = IS_TRACK,
  GENRE = TRACK
}		t_len;

typedef struct	s_tag
{
  char		header[HEADER];
  char		title[TITLE];
  char		artist[ARTIST];
  char		album[ALBUM];
  char		year[YEAR];
  char		comment[COMMENT];
  char		is_track[IS_TRACK];
  char		track[TRACK];
  char		genre[GENRE];
}		t_tag;

/*
** error.c we handle errors in it
*/
void	disp_usage(void);

/*
** is_tag.c  check for, get and disp TAG
*/
bool	is_tag(int);
int	get_tag(int);
void	disp_tag(t_tag);

/*
** tool/lib.c minimal libmy
*/
int	my_strlen(char *);
void	my_putstr(int, char *);
int	my_strncmp(char *, char *, int);

/*
** args.c parameters check
*/
int	get_args(char **);


#endif /* !MP3TAG_H_ */
