/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:13 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/23 12:16:55 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>


class Span
{
    private:
    unsigned int N;
    
    public:
    Span();
    Span(unsigned int n): N(n){};
    ~Span();
    Span& operator=(Span const & fp);
    Span(const Span & fp);
    void addNumber();
};
#endif