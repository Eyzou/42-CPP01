//
// Created by eyza on 01/07/24.
//

#include "replace.h"

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "./replace <filename> <string1> <string2>" << std::endl;
        return (EXIT_FAILURE);
    }
    Replace replace(argv[1]);
    replace.replaceFileContent(argv[2], argv[3]);
    return (EXIT_SUCCESS);
}