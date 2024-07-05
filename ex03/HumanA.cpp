//
// Created by eyza on 20/06/24.
//
#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name),  m_weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    if(m_weapon.getType() != "")
        std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
    else
        std::cout << m_name << "cannot attack as has no weapon " << m_weapon.getType() << std::endl;
}