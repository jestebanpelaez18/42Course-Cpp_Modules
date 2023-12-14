/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:50:28 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/14 17:08:01 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data = {1,"Hola"};
    uintptr_t test1;
    Data* test2;
    
    test1 = Serializer::serialize(&data);

    std::cout << "Serialized value: " << test1 << std::endl;

    test2 = Serializer::deserialize(test1);

    std::cout << "Deserialized value; " << test2->id << " , " << test2->str << std::endl;
    
}