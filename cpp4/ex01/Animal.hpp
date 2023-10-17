/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 16:35:23 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#define SIZE 4

class Animal
{   
    protected:

    std::string type;
    
    public:
    Animal();
    virtual ~Animal();
    Animal& operator=(Animal const & fp);
    Animal(const Animal & fp);
    std::string getType(void) const;
    virtual void makeSound() const;
};

#endif