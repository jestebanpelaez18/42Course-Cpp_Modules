/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:08:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/16 17:16:56 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T a[], size_t len, void (*f)(T &))
{
    for(int i = 0; i < len; i++)
        f(a[i]);
}

template <typename T>
void print(T object)
{
    std::cout << object << std::endl;
}
#endif