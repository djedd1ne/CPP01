/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:07 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:31:07 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}
Weapon::~Weapon(){}
const std::string& Weapon::getType(void){
    return (this->type);
}
void Weapon::setType(std::string type){
    this->type = type;
}