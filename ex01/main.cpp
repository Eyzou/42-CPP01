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
	int N = 8;
	std::cout << "Be ready for the Horde of Zombies . . ." << std::endl;
	Zombie **horde = zombieHorde(N,"no name");
	for(int i = 0; i < N; i++)
		horde[i]->announce();
	for(int i = 0; i < N ; i++)
		delete horde[i];
	delete[] horde;
}
