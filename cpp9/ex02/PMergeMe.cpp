/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/30 15:20:41 by jpelaez-         ###   ########.fr       */
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
void PMergeMe::merge_vector(std::vector<int> &container, int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = left;

    std::vector<int> temp(container.size());
    while(i <= middle && j <= right)
    {
        if(container[i] < container[j])
        {
            temp[k] = container[i];
            i++;
        }
        else
        {
            temp[k] = container[j];
            j++;
        }
        k++;
    }
    while (i <= middle)
    {
        temp[k] = container[i];
        i++;
        k++;
    }    
    while (j <= right)
    {
        temp[k] = container[j];
        j++;
        k++;
    }
    for(int i = left; i <= right; i++)
        container[i] = temp[i];
}

void PMergeMe::merge_deque(std::deque<int> &container, int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = left;

    // std::deque<int> temp(middle - left + 1);
    std::deque<int> temp(container.size());
    while(i <= middle && j <= right)
    {
        if(container[i] < container[j])
        {
            temp[k] = container[i];
            i++;
        }
        else
        {
            temp[k] = container[j];
            j++;
        }
        k++;
    }
    while (i <= middle)
    {
        temp[k] = container[i];
        i++;
        k++;
    }    
    while (j <= right)
    {
        temp[k] = container[j];
        j++;
        k++;
    }
    for(int i = left; i <= right; i++)
        container[i] = temp[i];
}

void PMergeMe::sort_deque(std::deque<int> &container, int left, int right)
{
    int middle;
    if(left < right)
    {
        middle = (left + right) / 2;
        sort_deque(container, left, middle);
        sort_deque(container, middle + 1, right);   
        merge_deque(container, left, middle, right);
    }
}

void PMergeMe::sort_vector(std::vector<int> &container, int left, int right)
{
    int middle;
    if(left < right)
    {
        middle = (left + right) / 2;
        sort_vector(container, left, middle);
        sort_vector(container, middle + 1, right);   
        merge_vector(container, left, middle, right);
    }
}
void PMergeMe::run(std::deque<int> &dq_container, std::vector<int> &vc_container)
{
    std::cout << "Before: ";
    print(dq_container);
    std::cout << "Before: ";
    print(vc_container);
    clock_t start = clock();
    sort_deque(dq_container,0, dq_container.size() - 1);
    clock_t end = clock();
    double time_used = ((double)(end - start)) / (CLOCKS_PER_SEC / 1e6);
    clock_t start2 = clock();
    sort_vector(vc_container,0, vc_container.size() - 1); 
    clock_t end2 = clock();
    double time_used2 = ((double)(end2 - start2)) / ((double)CLOCKS_PER_SEC * 1000000);
    std::cout << "After:  ";
    print(dq_container);
    std::cout << "After:  ";
    print(vc_container);   
    std::cout << "Time to process a range of " << dq_container.size() << " elements with std::deque<int> : " << time_used << "us" << std::endl;
    std::cout << "Time to process a range of " << vc_container.size() << " elements with std::vector<int> : " << time_used2 << "us" << std::endl;
}