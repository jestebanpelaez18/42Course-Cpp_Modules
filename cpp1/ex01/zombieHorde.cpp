/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:55:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/10 14:37:48 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie*    zombieHorde(int N, std::string name )
 {
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].get_name(name);
    
    return zombies;
 }