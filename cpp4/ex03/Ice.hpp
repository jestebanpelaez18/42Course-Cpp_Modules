/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:36:01 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 14:52:39 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{   
    public:
    Ice();
    Ice(std::string const & type);
    ~Ice();
    Ice& operator=(Ice const & fp);
    Ice(const Ice & fp);
    std::string const & getType() const;
    Ice* clone() const;
    void use(ICharacter& target);
};

#endif