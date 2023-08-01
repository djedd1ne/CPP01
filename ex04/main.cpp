/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:37:01 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:37:01 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int ac, char **av){
    std::ifstream file_in;
    std::ofstream file_out;
    std::stringstream buffer;
    std::string text;
    size_t offset;

    if (ac != 4)
    {
        std::cout << "Usage: ./sed <filename> string1 string2"
        << std::endl;
        return(1);
    }
    std::string argument1(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);
    file_in.open(argument1);
    if (file_in.is_open())
    {
        buffer << file_in.rdbuf();
        file_in.close();
        text = buffer.str();
        offset = 0;
        while ((offset = text.find(s1), offset) != -1 && text != "\0"){
            text.erase(offset, s1.length());
            text.insert(offset,s2);
            offset += s2.length();
        }
        file_out.open(argument1 += ".replace");
        file_out << text;
        file_out.close();
        return (0);
    }
    else
    {
        std::cout << "input file error" << std::endl;
        return (1);
    }
}