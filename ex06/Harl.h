/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:47:38 by ehamm             #+#    #+#             */
/*   Updated: 2024/07/02 10:38:21 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

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
