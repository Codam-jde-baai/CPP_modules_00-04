NAME:= BraiiiiiiinnnzzzZ
CC:= c++
FLAGS:= -Wall -Wextra -Werror -std=c++98
OBJDIR := objects
SRC := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS := $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\033[1;34m---------\\n MAKE $(NAME) \n---------\\n\033[0m"
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(OBJDIR)/%.o : %.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	@if [ -d "$(OBJDIR)" ]; then \
		printf "\033[1;34m--------------\n removing OBJ files \n--------------\n\033[0m"; \
		$(RM) -r $(OBJDIR); \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		printf "\033[1;34m--------------\n removing $(NAME) \n--------------\n\033[0m"; \
		$(RM) $(NAME); \
	fi


re: fclean all

.PHONY: clean fclean re