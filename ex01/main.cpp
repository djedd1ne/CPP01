/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:19:43 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 18:19:43 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name = "Zombie";
    Zombie *horde = zombieHorde(5, name);
    for (int i = 0; i < 5; i++)
       horde[i].announce();
    delete[] horde;
    //system("leaks zombieHorde");
}