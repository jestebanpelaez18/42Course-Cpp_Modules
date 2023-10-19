/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 14:54:37 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{   
    public:
    Cure();
    Cure(std::string const & type);
    ~Cure();
    Cure& operator=(Cure const & fp);
    Cure(const Cure & fp);
    std::string const & getType() const;
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif