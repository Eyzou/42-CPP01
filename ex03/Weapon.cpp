//
// Created by eyza on 20/06/24.
//
#include "Weapon.hpp"

#include <iostream>
#include <string>

Weapon::Weapon(std::string type) : m_type(type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType()
{
    return this->m_type;
}

void Weapon::setType(std::string newType)
{
    this->m_type = newType;
}