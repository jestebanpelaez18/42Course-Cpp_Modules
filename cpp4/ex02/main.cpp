/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:17:27 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 18:22:33 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    const AAnimal* Animals[SIZE];
    
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;

    for(int i = 0; i < SIZE; i++)
    {
        if(i < SIZE / 2)
            Animals[i] = new Dog();
        else 
            Animals[i] = new Cat();
    }

    for (int i = 0; i < SIZE; ++i) 
        delete Animals[i];
    
    return 0;
}