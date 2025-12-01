#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

class Harl
{
private:
    void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
    void	end(void);
    void	(Harl::*select[5])(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif