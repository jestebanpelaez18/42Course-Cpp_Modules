/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:01:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/17 13:57:05 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>

void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}
template <typename T>
T min(T &a, T &b)
{
    if(a < b)
        return a;
    return b;
}

template <typename T>
T max(T &a, T &b)
{
    if(a > b)
        return a;
    return b;
}
#endif