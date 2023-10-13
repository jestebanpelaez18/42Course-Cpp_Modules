/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:03:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/13 17:46:48 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{   

    public:
    Cat();
    ~Cat();
    Cat& operator=(Cat const & fp);
    Cat(const Cat & fp);
    virtual void makeSound() const;
};

#endif