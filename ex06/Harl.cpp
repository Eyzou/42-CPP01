/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:47:34 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/02 10:38:18 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
};

Harl::~Harl()
{
};

void Harl::debug(void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now" << std::endl;
}
int convertLevelToInt (const std::string& level)
{
	if(level == "DEBUG")
		return 0;
	if(level == "INFO")
		return 1;
	if(level == "WARNING")
		return 2;
	if(level == "ERROR")
		return 3;
	if(level == "exit")
		return 4;
	return(-1);

}
void Harl::complain(std::string level)
{
    void (Harl::*funcPtrs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std:: string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	switch(convertLevelToInt(level))
	{
		case 0:
		(this->*funcPtrs[0])();
		case 1:
		(this->*funcPtrs[1])();
		case 2:
		(this->*funcPtrs[2])();
		case 3:
		(this->*funcPtrs[3])();
		case 4:
			break;
		default:
			std::cout << "Invalid level"  << std::endl;
			break;
	}
}