/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:10:48 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 18:23:08 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{   
    private:

    Brain* dogBrain;
    
    public:
    Dog();
    ~Dog();
    Dog& operator=(Dog const & fp);
    Dog(const Dog & fp);
    virtual void makeSound() const;
};

#endif