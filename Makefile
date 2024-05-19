
NAME = cub3D
CC = g++
RM = rm -rf
CFLAGS = -lglfw

SRC			=	test

SRC_DIR = src/
OBJ_DIR = objects/

SRCS		= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC)))

OBJS		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: $(NAME) 

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all
.PHONY: all clean fclean re