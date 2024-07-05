#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>
#include <cstdlib>

class Harl {

    public:
        Harl();
        ~Harl();
        void complain(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

};

#endif //HARL_H
