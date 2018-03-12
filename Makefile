NAME = fractol

SRCS = 	fractol.c			\
		utilitaries.c		\
		colors.c			\
		event.c				\
		mandy.c				\
		map.c				\
		image.c				\
		mouse_hooking.c		\

SRCO = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

FRMW = -framework OpenGL -framework Appkit

LIB = ./libft/libft.a	\
		./minilibx_macos/libmlx.a	\

all: $(NAME)

$(NAME): $(SRCO) $(LIB)
	gcc -o $(NAME) $(SRCO) $(LIB) $(FRMW)

$(SRCO): $(SRCS)
	gcc -c $(FLAGS) $(SRCS)

$(LIB):
	make -C libft
	make -C minilibx_macos

clean:
	rm -rf $(SRCO)
	make -C libft clean
	make -C minilibx_macos clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all
