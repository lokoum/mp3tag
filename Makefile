##
## Makefile for Make mp3tag in /home/lokoum/prog/mp3tag
## 
## Made by Lucas Troncy
## Login   <troncy_l@epitech.net>
## 
## Started on  Thu Mar 24 14:29:59 2016 Lucas Troncy
## Last update Thu Mar 24 16:55:04 2016 Lucas Troncy
##

SRCS	=	src/main.c	\
		src/error.c	\
		src/is_tag.c	\
		src/args.c	\
		src/tools/lib.c	\
		src/set_tag.c	\

OBJS	=	$(SRCS:.c=.o)

NAME	=	mp3tag

CFLAGS	=	-Iinclude/ -Wall -Werror -ansi -pedantic

$(NAME):	$(OBJS)
		gcc -o $(NAME) $(OBJS) $(CFLASG)

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -r $(NAME)

re:		fclean all
