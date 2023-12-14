/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:00:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/14 16:49:54 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}

Serializer::~Serializer()
{
    
}

Serializer::Serializer(const Serializer & fp)
{
    *this = fp;
}

Serializer& Serializer::operator=(Serializer const & fp)
{
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t i;

    i = reinterpret_cast<uintptr_t>(ptr);
    return(i);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* ptr;

    ptr =reinterpret_cast<Data*>(raw);
    return(ptr);
}
