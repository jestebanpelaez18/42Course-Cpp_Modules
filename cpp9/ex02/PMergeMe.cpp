/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/22 17:42:56 by jpelaez-         ###   ########.fr       */
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

template <typename T>
void PMergeMe::print(const T& container)
{
    typename T::const_iterator itr;

    for(itr = container.begin(); itr < container.end(); itr++)
        std::cout << *itr << " ";
    std::cout << std::endl;
}

void PMergeMe::merge_deque(std::deque<int> &dq_container)
{
    
}

void PMergeMe::merge_vector(std::vector<int> &vc_container)
{
    
}
void PMergeMe::run(std::deque<int> &dq_container, std::vector<int> &vc_container)
{
    std::cout << "Before: ";
    print(dq_container);
    clock_t start = clock();
    //sorting fuction for container 1
    clock_t end = clock();
    double time_used = ((double)(end - start)) / (CLOCKS_PER_SEC / 1e6);
    clock_t start2 = clock();
    //sorting fuction for container 1
    clock_t end2 = clock();
    double time_used2 = ((double)(end2 - start2)) / (CLOCKS_PER_SEC / 1e6);
    std::cout << "After:  ";

    std::cout << "Time to process a range of " << dq_container.size() << " elements with std::deque<int> : " << time_used << "us" << std::endl;
    std::cout << "Time to process a range of " << vc_container.size() << " elements with std::deque<int> : " << time_used2 << "us" << std::endl;
}