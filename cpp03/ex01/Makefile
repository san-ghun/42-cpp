# =============================================================================
# Alias
# =============================================================================

CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

UNAME   	:= $(shell uname)

# SRC_DIR		= ./src

NAME 		= Serena,_my_love!
SRC_NAME 	= $(shell find . -iname "*.cpp")

OBJ_NAME 	= $(SRC_NAME:.cpp=.o)

HEADERS		= -I $(INC_DIR)

INC_DIR		= .
# LIB_DIR		= ./lib


# =============================================================================
# OS specific configs
# =============================================================================

# ifeq ($(UNAME), Darwin) # iMac / iOS
# 	CC			= gcc
# 	HEADERS		+= -I $(MLX_DIR)
# else ifeq ($(UNAME), FreeBSD) # FreeBSD
# 	CC			= clang
# else #Linux and others...
# 	CC			= cc
# 	HEADERS		+= -I /usr/include -I $(MLX_DIR)
# endif


# =============================================================================
# Main Command
# =============================================================================

all: $(NAME)

clean:
		@$(RM) $(OBJ_NAME)

fclean:
		@$(RM) $(OBJ_NAME)
		@$(RM) $(NAME)

re: fclean all


# =============================================================================
# Sub Command
# =============================================================================

%.o: %.c
		$(CC) $(CFLAGS) -c -o $@ $< $(HEADERS) 

dev: 
ifeq ($(UNAME), Darwin) # iMac / iOS
		$(CC) -fsanitize=address -g3 -o $(NAME) $(SRC_NAME) $(HEADERS)
else #Linux and others...
#		$(CC) -fsanitize=thread -g -o $(NAME) $(SRC_NAME) $(HEADERS)
#		$(CC) -fsanitize=address -g -o $(NAME) $(SRC_NAME) $(HEADERS)
		$(CC) -g3 -o $(NAME) $(SRC_NAME) $(HEADERS)
endif

$(NAME): $(OBJ_NAME)
ifeq ($(UNAME), Darwin) # iMac / iOS
		$(CC) $(CFLAGS) -o $@ $(OBJ_NAME) $(HEADERS)
else #Linux and others...
#		$(CC) $(CFLAGS) -fsanitize=address -g -o $@ $(OBJ_NAME) $(HEADERS)
		$(CC) $(CFLAGS) -o $@ $(OBJ_NAME) $(HEADERS)
endif

show:
		@printf "UNAME		: $(UNAME)\n"
		@printf "NAME  		: $(NAME)\n"
		@printf "CC		: $(CC)\n"
		@printf "CFLAGS		: $(CFLAGS)\n"
		@printf "SRC		: $(SRC_NAME)\n"
		@printf "OBJ		: $(OBJ_NAME)\n"

party:
					@printf "\033c"
					@echo "\n\033[35m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[1;33m♪┗(・o･)┓♪"
					@sleep 1
					@printf "\033c"
					@echo "\n\033[36m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[34m♪┗(・o･)┓♪\n"


# =============================================================================
# Test Code 
# =============================================================================

TEST 		= test.c
TMP 		= $(SRC_DIR)/$(NAME).c \
				$(SRC_DIR)/$(NAME)_util.c \

test:
		$(CC) $(TEST) -o $(TEST:.c=.out) $(TMP) $^ $(HEADERS)

tclean: 
		$(RM) -f test.o test.out

# Phony target

.PHONY: all clean fclean re bonus re_bonus party