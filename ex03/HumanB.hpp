//
// Created by eyza on 20/06/24.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
public:

    HumanB(std::string name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon& weapon);

private:

    std::string m_name;
    Weapon *m_weapon;

};
#endif //HUMANB_HPP
