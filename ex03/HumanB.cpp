//
// Created by eyza on 20/06/24.
//
#include "HumanB.hpp"

#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : m_name(name) ,m_weapon(NULL)
{
};

HumanB::~HumanB()
{

};

void HumanB::attack()
{
    if(this->m_weapon != NULL && m_weapon->getType() != "")
        std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
    else
        std::cout << m_name << "cannot attack as has no weapon " << m_weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon& weapon)
{
    this->m_weapon = &weapon;
};