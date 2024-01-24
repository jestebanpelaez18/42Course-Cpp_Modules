/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:13 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/24 16:17:45 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iterator>

class Span
{
    private:
    std::vector<int> int_vect;
    unsigned int vec_size;
    
    public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span& operator=(Span const & fp);
    Span(const Span & fp);
    unsigned int getSize();
    void addNumber(int number);
    void getNumbers();
    void addRandomNumbers();
    int shortestSpan() const;
    int longestSpan() const;
};

std::ostream& operator<<(std::ostream& o, Span const & f);
#endif