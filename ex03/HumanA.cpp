/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:43 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:31:43 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}
HumanA::~HumanA(){}
void HumanA::attack(void) const{
    std::cout << this->name << " attacks with their " \
    << this->weapon.getType() << std::endl;
}