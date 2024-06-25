//
// Created by eyza on 20/06/24.
//

#include "Zombie.hpp"

Zombie** zombieHorde(int N, std::string name)
{
    Zombie** zombies = new Zombie*[N];

    for(int i = 0; i < N; i++)
        zombies[i] = new Zombie(name);
    return(zombies);
}