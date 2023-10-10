/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/10 14:38:07 by jpelaez-         ###   ########.fr       */
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
    ~Zombie();
    void get_name(std:: string name);
    void announce(void);

};

 Zombie*    zombieHorde(int N, std::string name);

#endif