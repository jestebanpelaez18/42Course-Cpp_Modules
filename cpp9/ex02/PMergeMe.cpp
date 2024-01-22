/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/22 14:24:17 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe()
{
}
PMergeMe::~PMergeMe()
{
    
}

PMergeMe::PMergeMe(const PMergeMe & fp)
{
    *this = fp;
}


PMergeMe& PMergeMe::operator=(PMergeMe const & fp)
{
    return *this;
}