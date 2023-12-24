/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:14:41 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/23 12:09:28 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>


class NotMatch: public std::exception
{
    const char * what () const throw () {
    return "Match not found";
    }
};

template <typename T>
void easyfind(T &objects, int n)
{
    typename T::iterator i;
    for(i = objects.begin(); i < objects.end() ; i++)
    {
        if(*i == n)
        {
            std::cout << "Match found: " << *i <<std::endl;
            return ;
        }
    }
    throw NotMatch();
}
#endif