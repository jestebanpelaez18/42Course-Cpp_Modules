/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:06:38 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 18:21:04 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{   
    private:

    std::string ideas[100];
    
    public:
    Brain();
    ~Brain();
    Brain& operator=(Brain const & fp);
    Brain(const Brain & fp);
};

#endif