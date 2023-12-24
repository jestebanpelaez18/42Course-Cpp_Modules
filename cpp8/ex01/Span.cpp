/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:27 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/24 11:45:25 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}
Span::Span(unsigned int N):vec_size(N)
{  
};
Span::~Span()
{
    
}

Span::Span(const Span & fp): int_vect(fp.int_vect), vec_size(fp.vec_size)
{
};

Span& Span::operator=(Span const & fp)
{
    int_vect = fp.int_vect;
    vec_size = fp.vec_size;
    return *this;
}

unsigned int Span::getSize()
{
    return(vec_size);
}
void Span::addNumber(int number)
{
    if(int_vect.size() == getSize())
        throw std::invalid_argument("Can not store more values");
    int_vect.push_back(number);
}

int Span::shortestSpan() const
{
    if(int_vect.size() == 0 || int_vect.size() == 1)
        throw std::invalid_argument("Can not calculate any span");
    return (1);
}

int Span::longestSpan() const
{
    if(int_vect.size() == 0 || int_vect.size() == 1)
        throw std::invalid_argument("Can not calculate any span");
        
}

std::ostream& operator<<(std::ostream& o, Span const & f)
{
    o << f.shortestSpan();
    o << f.longestSpan();
    return o;
}