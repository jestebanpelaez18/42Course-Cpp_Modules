/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:10:48 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/13 17:47:03 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{   

    public:
    Dog();
    ~Dog();
    Dog& operator=(Dog const & fp);
    Dog(const Dog & fp);
    virtual void makeSound() const;
};

#endif