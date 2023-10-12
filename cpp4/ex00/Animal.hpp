/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:58:26 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{   
    protected:

    std::string type;
    
    public:
    Animal();
    ~Animal();
    Animal& operator=(Animal const & fp);
    Animal(const Animal & fp);

};

#endif