/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:32 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:31:32 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}
HumanB::~HumanB(){}
void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}
void HumanB::attack(void) const {
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon" << std::endl;
    else {
        std::cout << this->name << " attacks with their " \
        << (*(this->weapon)).getType() << std::endl;
    }
}