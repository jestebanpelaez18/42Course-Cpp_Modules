/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:56:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/26 21:54:56 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTAN_STACK_HPP
# define MUTAN_STACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <iterator>

template <class T>
class MutantStack: public std::stack<T>
{
    private:
    
    public:
    MutantStack()
    {}
    ~MutantStack()
    {}
    MutantStack& operator=(MutantStack const & fp)
    {
        *this = fp;
        return *this;
    }
    MutantStack(const MutantStack & fp)
    {
        *this = fp;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return(std::stack<T>::c.begin());
    }
    iterator end()
    {
        return(std::stack<T>::c.end());
    }
};

template <class T>
std::ostream& operator<<(std::ostream& o, MutantStack<T> const & f);
#endif