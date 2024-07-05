#include "Harl.h"

int main(void)
{
    std::string input;
    Harl harl;

    do
    {
        std::cout << "Please add a level for Harl comments:" << std::endl;
        getline(std::cin, input);
        if(!std::cin.good())
            return (1);
        harl.complain(input);
    }
        while (input.compare("exit") != 0);
    return (0);
}