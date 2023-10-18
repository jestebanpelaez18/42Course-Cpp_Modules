/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 17:35:14 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{   
    public:
    Cure();
    Cure(std::string const & type);
    ~Cure();
    Cure& operator=(Cure const & fp);
    Cure(const Cure & fp);
    std::string const & getType() const;
    // virtual Ice* clone() const = 0;
    // virtual void use(ICharacter& target);
};

#endif