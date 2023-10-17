/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:35:01 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 13:44:58 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{   
    protected:

    std::string type;
    
    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal& operator=(WrongAnimal const & fp);
    WrongAnimal(const WrongAnimal & fp);
    std::string getType(void) const;
    void makeSound() const;
};

#endif