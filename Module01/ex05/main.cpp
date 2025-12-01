#include "Harl.hpp"

void	displayMenu()
{
	std::cout << "Welcome to Harl 2.0. Select an option:" << std::endl;
	std::cout << MAGENTA << "\tDEBUG" << RESET << std::endl;
	std::cout << GREEN << "\tINFO" << RESET << std::endl;
	std::cout << YELLOW << "\tWARNING" << RESET << std::endl;
	std::cout << RED << "\tERROR" << RESET << std::endl;
}


int main(void)
{
    std::string	selected_word;

	while (true || !std::cin.eof())
	{
		displayMenu();
		std::getline(std::cin, selected_word);
		if (std::cin.eof())
		{
			std::cout << YELLOW << std::endl << "Exiting..." << RESET << std::endl;
			return (1);
		}
		if (selected_word != "DEBUG" && selected_word != "INFO" && selected_word != "WARNING" && selected_word != "ERROR")
		{
			std::cerr << RED << "Invalid option selected." << RESET << std::endl << std::endl;
			continue ;
		}
		break ;
	}
	Harl harl;
	harl.complain(selected_word);
	return 0;
}