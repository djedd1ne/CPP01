/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:38 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:31:38 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void) const;
};

#endif