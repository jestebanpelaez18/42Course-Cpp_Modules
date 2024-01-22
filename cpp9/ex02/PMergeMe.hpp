/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:20:04 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/22 21:31:23 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
# define P_MERGE_ME_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <stdlib.h>
#include <deque>
#include <vector>
#include <iterator>
#include <ctime>

class PMergeMe
{
    public:
    PMergeMe();
    ~PMergeMe();
    PMergeMe& operator=(PMergeMe const & fp);
    PMergeMe(const PMergeMe & fp);
    void run(std::deque<int> &dq_container, std::vector<int> &vc_container);
    template <typename T>
    void print(const T& container);
    template <typename T1>
    void merge_sort(const T1& container, int left, int right);
    template <typename T1>
    void merge(const T1& container, int left, int middle, int right);
};

#endif