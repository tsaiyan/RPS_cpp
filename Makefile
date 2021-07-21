# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

HEADERS = Sign.hpp Logic.hpp
OBJTS =  main.cpp Logic.cpp
NAME = RPS

RM = rm -f

CC = clang++ -Wall -Wextra -Werror

.PHONY:		all clean fclean re

all: $(NAME) Makefile Logic.hpp 

$(NAME): $(OBJTS)
	@$(CC) $(OBJTS) -o $(NAME)
	@echo "$(GREEN)Comliled.$(RESET)"
	@echo "$(GREEN)./RPS is running...\n$(RESET)"
	@$ ./RPS
clean:
	@$ rm -rf $(NAME)
	@echo "$(RED)$(NAME) deleted.$(RESET)"
fclean: clean
re: fclean all
