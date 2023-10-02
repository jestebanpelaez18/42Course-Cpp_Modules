/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/02 18:13:53 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_HPP
# define FILES_HPP

#include <iostream>
#include <fstream>
#include <string>

class Files
{
    private:
    std:: string line;

    public:
    void file_replace(std::ifstream& file, std::string s1, std::string s2);
};


#endif