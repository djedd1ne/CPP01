/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:37:37 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:37:37 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter level" << std::endl;
        return (1);
    }
    Harl harl;
	harl.complain(av[1]);
    return(0);
}