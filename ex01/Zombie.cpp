/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:20:08 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 18:20:08 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "Zombie";
}
Zombie::Zombie(std::string name) {
    this->name = name;
}
Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}
void Zombie::name_zombie(std::string name) {
     this->name = name;
}

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}