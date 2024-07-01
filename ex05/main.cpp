//
// Created by eyza on 01/07/24.
//

#include "Harl.h"

int main(int argc, char **argv)
{
    std::string input;
    Harl harl;

    if (argc != 1)
    {
        do
        {
             std::cout << "Please add a level for Harl comments:" << std::endl;
             std::cin >> input;
             harl.complain(input);
        }
        while (input.compare("exit") != 0);
    }
    return (0);
}