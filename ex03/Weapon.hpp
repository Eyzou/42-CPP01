//
// Created by eyza on 20/06/24.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:

    Weapon(std::string type);
    ~Weapon();

    const std::string getType();
    void setType(std::string newType);

    private:

    std::string m_type;

};


#endif //WEAPON_HPP
