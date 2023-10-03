/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:36 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 17:30:28 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void) ;
    void error(void);

    public:
    void    complain(std::string level);

};


#endif