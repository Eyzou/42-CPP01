/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:47:41 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/02 10:18:03 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.h"

int main(void)
{
    std::string input;
    Harl harl;

    do
    {
        std::cout << "Please add a level for Harl comments:" << std::endl;
		std::cout << "DEBUG or INFO or WARNING or ERROR"  << std::endl;
		std::cout << "if you want to quit enter exit."  << std::endl;
    	getline(std::cin, input);
    	if(!std::cin.good())
    		return (1);
        harl.complain(input);
    }
      while (input.compare("exit") != 0);
}