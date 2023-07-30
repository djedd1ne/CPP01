/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:20:40 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 18:20:40 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *horde = new Zombie[N];
    for(int i = 0; i < N; i++)
        horde[i].name_zombie(name);
    return (horde);
}