/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:11:31 by ehamm             #+#    #+#             */
/*   Updated: 2024/06/19 15:33:54 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "'HI THIS IS BRAIN'";
	std::string *stringPTR = &str ;
	std::string &stringREF = *stringPTR;

	std::cout << "memory adress of the string variable:" << &str << std::endl;
	std::cout << "memory adress held by stringPTR:" << &stringPTR << std::endl;
	std::cout << "memory adress held by stringREF:" << &stringREF << std::endl;

	std::cout << "The value of the string variable" << str << std::endl;
	std::cout << "The value pointed to by stringPTR:" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringPTR:" << stringREF << std::endl;

	return(0);
}
