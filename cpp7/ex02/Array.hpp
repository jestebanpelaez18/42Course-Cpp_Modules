/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:33:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/21 19:10:51 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array 
{
    private:

    T* array;
    unsigned int ar_size;
        
    public:
    Array(): array(new T[0]), ar_size(0) {};
    Array(unsigned int n): array(new T[n]), ar_size(n) {};
    ~Array()
    {
        if(array)
        {
            delete[] array;
        }
    }
    Array& operator=(Array const & fp)
    {
        ar_size = fp.ar_size;
        delete[] array;
        array = new T[ar_size];
        for (int i = 0; i < ar_size; i++)
            array[i] = fp.array[i];
        return *this;
    }
    Array(const Array & fp): ar_size(fp.ar_size), array(new T[ar_size])
    {
        for (int i = 0; i < ar_size; i++)
            array[i] = fp.array[i];
    }
    unsigned int size() const
    { 
        return(ar_size);
    }
    T& operator[](unsigned int i)
    {
        if(i >= ar_size)
            throw std::out_of_range("Index out of bounds");
        return(array[i]);
    }
};
#endif