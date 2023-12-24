/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:27 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/24 19:48:26 by jpelaez-         ###   ########.fr       */
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

void Span::addRandomNumbers()
{
    for(int i = 0; i < vec_size; ++i)
        int_vect.push_back(rand() % 1000);
}

int Span::shortestSpan() const
{
    if(int_vect.size() == 0 || int_vect.size() == 1)
        throw std::invalid_argument("Can not calculate any span");
    int result = abs(*int_vect.begin() - *(int_vect.begin() + 1));
    int temp = 0;
    for(auto i = int_vect.begin(); i != int_vect.end(); ++i)
    {
        for(auto j = i + 1; j != int_vect.end(); ++j)
        {
            temp = abs(*i - *j);
            if(temp < result)
                result = temp;
        }
    }
    return (result);
}

int Span::longestSpan() const
{
    if(int_vect.size() == 0 || int_vect.size() == 1)
        throw std::invalid_argument("Can not calculate any span");
    int min_value = *int_vect.begin();
    int max_value = *int_vect.begin();
    
    for (auto i = int_vect.begin(); i != int_vect.end(); ++i)
    {
        if(*i < min_value)
            min_value = *i;
        else if (*i > max_value)
            max_value = *i;
    }
    return max_value - min_value;
}

void Span::getNumbers()
{
    for (auto i = int_vect.begin(); i != int_vect.end(); ++i)
    {
        std::cout << *i << ", ";
    }
    std::cout << std::endl;
    
}
std::ostream& operator<<(std::ostream& o, Span const & f)
{
    o << f.shortestSpan();
    o << f.longestSpan();
    return o;
}