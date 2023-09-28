/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:13:37 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/28 15:58:00 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
    std:: string name;
    
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif