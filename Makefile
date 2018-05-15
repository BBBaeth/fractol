NAME = fractol

SRCS = 	fractol.c			\
		utilitaries.c		\
		utilitaries2.c		\
		colors.c			\
		event.c				\
		mandy.c				\
		burningship.c		\
		map.c				\
		image.c				\
		mouse_hooking.c		\
		helpwind.c			\
		colortab.c			\
		palets.c			\
		move.c				\

SRCO = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

FRMW = -framework OpenGL -framework Appkit -flto

LIB =	./libft/libft.a			\
		./minilibx_macos/libmlx.a	\

SRC_PATH = .

OBJ_PATH = compiled_objects

SRC = $(addprefix $(SRCS_PATH)/,$(SRCS))

OBJ = $(addprefix $(OBJ_PATH)/,$(SRCO))

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIB) $(FRMW)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	gcc -c $(FLAGS) -o $@ -c $<

$(LIB):
	make -C libft
	make -C minilibx_macos

clean:
	rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	make -C libft clean
	make -C minilibx_macos clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean

re: fclean all
