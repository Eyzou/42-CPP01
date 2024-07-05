/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyza <eyza@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:12:32 by eyza              #+#    #+#             */
/*   Updated: 2024/07/01 10:51:29 by eyza             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by eyza on 01/07/24.
//

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
#include <cstdlib>

class Replace {

    public :
        Replace(std::string filename);
        ~Replace();

        void replaceFileContent(std::string s1, std::string s2);

    private:
        std::string filename;

};

#endif //REPLACE_H
