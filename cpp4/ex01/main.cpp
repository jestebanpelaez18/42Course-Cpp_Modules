/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:17:27 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/20 17:41:22 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* Animals[SIZE];
    
    delete j;
    delete i;

    for(int i = 0; i < SIZE; i++)
    {
        if(i < SIZE / 2)
            Animals[i] = new Dog();
        else 
            Animals[i] = new Cat();
    }
    
    for(int i = 0; i < SIZE; i++)
    {
        Animals[i]->makeSound();
    }

    for (int i = 0; i < SIZE; ++i) 
        delete Animals[i];
    
    return 0;
}