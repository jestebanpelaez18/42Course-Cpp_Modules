/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:08:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 16:32:43 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain & fp)
{
    for(int i = 100; i < 100; i++)
    {
        this->ideas[i] = fp.ideas[i];
    }
    std::cout << "Copy Brain constructor called" << std::endl;  
}
Brain& Brain::operator=(Brain const & fp)
{
    for(int i = 100; i < 100; i++)
    {
        this->ideas[i] = fp.ideas[i];
    }
    return *this;
}
