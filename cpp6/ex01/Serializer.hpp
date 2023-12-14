/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:01:05 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/14 17:04:00 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdio.h>
#include <stdint.h>

struct Data {
    int id;
    std::string str;
};

class Serializer
{
    private:
    Serializer();
    ~Serializer();
    Serializer& operator=(Serializer const & fp);
    Serializer(const Serializer & fp);
    
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif