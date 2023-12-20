/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:33:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/20 11:54:53 by jpelaez-         ###   ########.fr       */
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
    ~Array();
    Array& operator=(Array const & fp)
    {

    };
    Array(const Array & fp);
    unsigned int size()
    { return(size);};
    class OutOfBounds: public std::exception
    {
        const char * what () const throw () {
        return "Index out of bounds";
        }
    };
};
#endif