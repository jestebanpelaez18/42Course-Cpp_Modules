/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:33:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/20 12:19:06 by jpelaez-         ###   ########.fr       */
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
    unsigned int size;
        
    public:
    Array(): array(new T[0]), size(0) {};
    Array(unsigned int n): array(new T[n]), size(n) {};
    ~Array()
    {
        if(array)
            delete[] array;
    };
    Array& operator=(Array const & fp)
    {
        size = fp.size;
        delete[] array;
        array = new T[size];
        for (int i = 0; i < size; i++)
            array[i] = fp.array[i];
    };
    Array(const Array & fp): size(fp.size), array(new T[size]);
    {
        for (int i = 0; i < size; i++)
            array[i] = fp.array[i];
    }
    unsigned int size()
    { return(size);};
    T& operator[](unsigned int i)
    {
        if(i < size)
            throw OutOfBounds();
        return(array[i]);
    }
    class OutOfBounds: public std::out_of_range
    {
        const char * what () const throw () {
        return "Index out of bounds";
        }
    };
};
#endif