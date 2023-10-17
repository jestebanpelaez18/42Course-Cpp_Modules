/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 17:35:20 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#define SIZE 4

class AAnimal
{   
    protected:

    std::string type;
    
    public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal& operator=(AAnimal const & fp);
    AAnimal(const AAnimal & fp);
    std::string getType(void) const;
    virtual void makeSound() const = 0;
};

#endif