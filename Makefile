NAME			=	pipex

PRINTF			=	ft_printf/libftprintf.a

LIBFT			=	libft/libft.a

GNL				=	get_next_line/get_next_line.c \
					get_next_line/get_next_line_utils.c \

SRCS			=	srcs/main.c

OBJS			=	${SRCS:.c=.o}

OBJS_GNL		=	${GNL:.c=.o}

INC				=	-Iincludes

CC				=	cc

CFLAGS			=	-Wall -Werror -Wextra -g3

DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
BLUE = \033[0;94m
MAGENTA = \033[0;95m

all				:	${NAME}

$(NAME): $(OBJS) ${OBJS_GNL}
	@make -C libft
	@make -C ft_printf
	cc $(OBJS) $(INC) ${OBJS_GNL} ${LIBFT} ${PRINTF} -o $(NAME)
	@echo "$(GREEN)pipex executable files created!$(DEF_COLOR)"

clean			:
					@make clean -C libft
					@make clean -C ft_printf
					@rm -rf ${OBJS} ${OBJS_GNL}
					@echo "$(BLUE)pipex object files cleaned!$(DEF_COLOR)"

fclean			:	clean
					@make fclean -C libft
					@make fclean -C ft_printf
					@rm -rf ${LIBFT}
					@rm -rf ${PRINTF}
					@rm -rf ${NAME}
					@echo "$(MAGENTA)pipex executable files cleaned!$(DEF_COLOR)"

re				:	fclean all

.PHONY			:	all clean fclean re bonus
