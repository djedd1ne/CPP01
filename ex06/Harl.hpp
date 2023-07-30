/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:37:31 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/30 20:37:31 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl {
    public:
        Harl();
	    ~Harl();
        void complain(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif