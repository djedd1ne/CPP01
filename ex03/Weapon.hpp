/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:31:16 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:31:16 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
    private:
        std::string type;

    public:
        Weapon(std::string type);
        ~Weapon();

        const std::string &getType(void);
        void setType(std::string type);
};

#endif