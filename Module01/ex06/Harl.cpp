
#include "Harl.hpp"

Harl::Harl()
{
    select[0] = &Harl::debug;
	select[1] = &Harl::info;
	select[2] = &Harl::warning;
	select[3] = &Harl::error;
	select[4] = &Harl::end;
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << MAGENTA << std::endl << "DEBUG" << std::endl << RESET 
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
        << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN << std::endl << "INFO" << std::endl << RESET
        << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
        << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << std::endl << "WARNING" << std::endl << RESET 
        << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
        << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << std::endl << "ERROR" << std::endl << RESET
        << "This is unacceptable! I want to speak to the manager now." 
        << RESET << std::endl;
}


void	Harl::end(void)
{
	std::cout << "[ Probably  complaining  about  insignificant  problems  ]" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int size = 4;
	for (int i = 0; i < size; i++)
	{
		if (levels[i] == level)
		{
			(this->*select[i])();
			return ;
		}
	}
}