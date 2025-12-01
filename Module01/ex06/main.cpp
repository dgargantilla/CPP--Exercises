#include "Harl.hpp"

void harlSelection( std::string level)
{
	Harl harl;
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break ;
	}
	switch (i)
	{
		case 0:
			harl.complain(levels[0]);
			// fall through
		case 1:
			harl.complain(levels[1]);
			// fall through
		case 2:
			harl.complain(levels[2]);
			// fall through
		case 3:
			harl.complain(levels[3]);
			break ;
		default:
			harl.complain(levels[4]);
			break ;
	}
}

int main(int argc, char **argv)
{
    std::string	selected_word;

	if (argc != 2)
	{
		std::cerr << RED << "Incorrect number of arguments" << RESET << std::endl << std::endl;
		return (-1);
	}
	harlSelection(argv[1]);
	return (0);
}