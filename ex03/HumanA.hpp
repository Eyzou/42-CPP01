//
// Created by eyza on 20/06/24.
//

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
    public:

        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void attack();

    private:

        std::string m_name;
        Weapon& m_weapon;

};

#endif //HUMANA_HPP
