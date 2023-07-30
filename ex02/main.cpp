/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:25:46 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 18:25:46 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAR;
    std::string &stringREF = stringVAR;

    std::cout << "The memory address of the string variable: " << &stringVAR << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "***************************************************" << std::endl;
    std::cout << "The value of the string variable: " << stringVAR << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}