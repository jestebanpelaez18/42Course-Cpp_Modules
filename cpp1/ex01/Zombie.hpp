/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/28 17:04:40 by jpelaez-         ###   ########.fr       */
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
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);

};

 Zombie*    zombieHorde(int N, std::string name);

#endif