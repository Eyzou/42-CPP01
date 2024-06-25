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

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Zombie of the Stack" << std::endl;
	Zombie zombie1("Jean-Pierre Stack");
	Zombie zombie2("Pipou Stack");
	Zombie zombie3("");

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();

	std::cout << "Zombie of the Heap" << std::endl;
	Zombie* heapZombie4;

	heapZombie4 = newZombie("Georges Heap");
	heapZombie4->announce();
	randomChump("Ginette Heap");
	delete(heapZombie4);


}
