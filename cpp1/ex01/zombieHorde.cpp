/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:55:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/28 17:07:19 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie*    zombieHorde( int N, std::string name )
 {
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i] = Zombie(name);
    
    return zombies;
 }