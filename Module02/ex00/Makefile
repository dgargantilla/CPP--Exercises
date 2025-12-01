# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgargantilla <dgargantilla@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 11:01:37 by dgargant          #+#    #+#              #
#    Updated: 2025/12/01 13:04:26 by dgargantill      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	   = fixer

CXX          = c++

CXXFLAGS      = -Wall -Wextra -Werror -std=c++98

# Colores
RED         = \033[0;31m
GREEN       = \033[0;92m
CYAN        = \033[0;96m
BLUE        = \033[0;34m
PURPLE      = \033[0;95m
YELLOW      = \033[0;93m
RESET       = \033[0m
BOLD_CYAN   = \033[1;96m


SRCS :=	main.cpp	Fixed.cpp

OBJS  = $(SRCS:.cpp=.o)

##SRCS        = $(SRCS_FILES)
##OBJS        = $(OBJS_FILES)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling $(BLUE)$(NAME)$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)$(NAME) compiled!$(RESET)"
	@echo "$(BOLD_CYAN)\n------------\n| Done! 👌 |\n------------$(RESET)"

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	@echo "$(GREEN)$(NAME)$(YELLOW) cleaned$(RESET)"

re: fclean all

.PHONY: clean fclean re all
.SILENT: clean fclean re all