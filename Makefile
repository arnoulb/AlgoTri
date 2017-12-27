##
## Makefile for  in /home/daelomin/rendu/CPE/CPE_20_bsq
## 
## Made by Arnould Jean-Michel
## Login   <daelomin@epitech.net>
## 
## Started on  Tue Dec  8 19:20:03 2015 Arnould Jean-Michel
## Last update Tue Dec 15 23:24:42 2015 Arnould Jean-Michel
##

CC		:=	gcc
RM		:= 	rm -f
NAME		:= 	tri

SRC_DIR		:= 	src
OBJ_DIR		:=	obj
INC_DIR		:=	inc

CFLAGS		:=	-Wextra -Wall -Werror -g
#CFLAGS		:=	-g
CFLAGS		+=	-I$(INC_DIR)

SRC		:= 	main.c\
			base.c\
			tri.c\
			bubble_sort.c\
			heap_sort.c\
			selection_sort.c\
			insertion_sort.c\
			quick_sort.c\
			radix_sort.c

SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ		:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))


$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c -o $@ $<

all:			$(NAME)


$(NAME): 		$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
			$(RM) $(OBJ)
			$(RM) $(SRC_DIR)/*~
			$(RM) $(OBJ_DIR)/*~
			$(RM) $(INC_DIR)/*~
			$(RM) *~
			$(RM) $(SRC_DIR)/*\#
			$(RM) $(OBJ_DIR)/*\#
			$(RM) $(INC_DIR)/*\#
			$(RM) *\#

fclean: 		clean
			$(RM) $(NAME)
			$(RM) $(NAME2)

re:			fclean all

.PHONY: 		all clean fclean re
