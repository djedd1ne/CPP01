/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:37:23 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:37:23 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}
void Harl::complain(std::string level){
    std::string levels[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};

    int i;
    for (i = 0; i < 4; i++)
        if (levels[i] == level)
            break;
    
    switch (i) {
        case 3:
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            std::cout << std::endl;
        case 2:
            std::cout << "[ INFO ]" << std::endl;
            info();
            std::cout << std::endl;
        case 1:
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            std::cout << std::endl;
        case 0:
            std::cout << "[ ERROR ]" << std::endl;
            error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;    
    }
}
void Harl::debug(void){
    std::cout << "I love having extra bacon for "
    "my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}
void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. "
    "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << std::endl;
}
void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
    "coming for years whereas you started working here since last month."
    << std::endl;
}
void Harl::error(void){
      std::cout << "This is unacceptable! I want to speak to the manager now."
      << std::endl;
}