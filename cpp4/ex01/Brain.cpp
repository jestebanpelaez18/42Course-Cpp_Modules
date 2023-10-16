/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:08:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 18:15:59 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Animal destructor called" << std::endl;
}

// Brain::Brain(const Brain & fp)
// {
//     this->type = fp.type;
//     std::cout << "Copy Brain constructor called" << std::endl;  
// }
// Brain& Brain::operator=(Brain const & fp)
// {
//     this->type = fp.type;
//     return *this;
// }
