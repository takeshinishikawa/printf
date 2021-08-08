NAME =		libftprintf.a
CC =		gcc
CFLAGS =	-Wall -Wextra -Werror
SRC	= 		ft_printf.c definestr.c print_char.c \
			print_hexa.c print_int.c print_ptr.c print_str.c print_uint.c

OBJ =		$(SRC:.c=.o)
RM =		rm -f

all: 			$(NAME)

$(NAME): 		$(OBJ)
				@make -C libft/
				@ar rc $(NAME) $(OBJ) libft/*.o
				@ranlib $(NAME)

$(OBJ): 		$(SRC) $(INC)
				$(CC) $(CFLAGS) -c $(SRC)

bonus: 			all

clean:
				@$(RM) $(OBJ)

fclean: 		clean
				@$(RM) $(NAME)
				@make fclean -C libft/

re: 			fclean all

.PHONY: 		all clean fclean re
