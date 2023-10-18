/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:44:27 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 19:34:29 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character: public ICharacter
{
    private:
    std:: string name;
    AMateria *inventory[4];

    public:
    Character();
    Character(std::string const & type);
    Character(std::string name);
    ~Character();
    Character& operator=(Character const & fp);
    Character(const Character & fp);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif