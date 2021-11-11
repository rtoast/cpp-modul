NAME = DiamondTrap

CPP_FILE = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
O_FILE = $(CPP_FILE:.cpp=.o)

all:
	$(MAKE) $(NAME) -j 4

$(NAME): $(O_FILE)
	c++ $(O_FILE) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
	@c++ -c -Wall -Wextra -Werror -Wshadow -Wno-shadow $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re