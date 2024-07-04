NAME 			    := libft.a
CC					:= gcc

COMPIL_FLAGS	?= -Wall -Wextra -Werror

SOURCEFILES	:=	ft_atoi.c  \
				ft_bzero.c \
				ft_calloc.c  \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				get_next_line_utils.c \
				get_next_line.c \
				ft_printf.c \
				print_functions.c

HEADERS	:=	libft.h

OFILES			:=	$(SOURCEFILES:.c=.o)
BONUS_OFILES	:= $(BONUS_SOURCES:.c=.o)
OBJ_DIR			:=	obj
OBJS			:=	$(addprefix $(OBJ_DIR), $(addprefix /, $(OFILES)))
BONUS_OBJS		:=  $(addprefix $(OBJ_DIR), $(addprefix /, $(BONUS_OFILES)))

all : $(NAME)

$(NAME) : $(OBJS)
	@printf "$(COMP_BEFORE)$(C_LGREEN)$@$(COMP_AFTER)"
	@ar -rcs $(NAME) $(OBJS)
	@printf "$(COMP_DONE)"

$(OBJ_DIR)/%.o : %.c $(HEADERS) | $(OBJ_DIR)
	@printf "$(COMP_BEFORE)$(notdir $<)$(COMP_AFTER)"
	@$(CC) $(COMPIL_FLAGS) -o $@ -c $<
	@printf "$(COMP_DONE)"

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

clean :
	@rm -rf $(OBJ_DIR)
	@printf "$(C_RED)Files cleaned\n$(C_RESET)"

fclean : clean
	@rm -f $(NAME)

re : fclean all

.phony : clean fclean all re

# Fancy shmancy

COMP_BEFORE = $(C_ORANGE)Compiling: $(C_CYAN)$(C_BOLD)
COMP_AFTER  = $(C_RESET)$(C_ORANGE)... $(C_RESET)
COMP_DONE   = $(C_GREEN)(Done!)$(C_RESET)\n

C_RED		  = \e[38;2;255;0;0m
C_ORANGE	= \e[38;2;255;128;0m
C_LGREEN	= \e[38;2;128;255;128m
C_GREEN		= \e[38;2;0;255;0m
C_CYAN		= \e[38;2;0;255;255m

C_RESET	  = \e[0m
C_BOLD	  = \e[1m
