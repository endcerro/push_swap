NAME 		=	a.out
DIRSRC 		=	src
OBJD 		=	obj
INCLUDE 	=	head
OBJ			=	$(SRC:.c=.o)
OBJS		=	$(OBJ:%=$(OBJD)/%)

SRC 		= 	main.c \
				calls.c

CFLAGS		=	-Wall -Wextra -fsanitize=address #-march=native -pipe -O3 #-g3 -fsanitize=address #
CC			=	clang

all : $(NAME) #checker push_swap

#checker : 

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