/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:13:04 by ehamm             #+#    #+#             */
/*   Updated: 2024/06/19 15:36:47 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		void setName(std::string name);

	private:

		std::string m_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif