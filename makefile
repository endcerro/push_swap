NAME 		=	checker
DIRSRC 		=	src
OBJD 		=	obj
INCLUDE 	=	head
OBJ			=	$(SRC:.c=.o)
OBJS		=	$(OBJ:%=$(OBJD)/%)

#CHEKCER_M 	= checker.c

SRC 		= 	checker.c \
				calls.c	\
				utils.c	\
				gnl.c

CFLAGS		=	-Wall -Wextra -g3 -fsanitize=address #-march=native -pipe -O3 #-g3 -fsanitize=address #
CC			=	clang

all : checker		#$(NAME) checker #checker push_swap

#checker : 

#checker : $(OBJD) $(OBJS)
#			$(CC) $(CFLAGS) -lpthread -pthread -I ./ -o $(NAME) $(OBJS) $(LIB)

$(NAME) 	: $(OBJD) $(OBJS)
			$(CC) $(CFLAGS) -lpthread -pthread -I ./ -o $(NAME) $(OBJS) $(LIB)

$(OBJD)	:
			@mkdir $(OBJD)

$(OBJD)/%.o	:	$(DIRSRC)/%.c
			$(CC) -I ./$(INCLUDE) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJD)

re : fclean all

.PHONY : all clean fclean re