/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 16:45:55 by jpelaez-         ###   ########.fr       */
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
    std:: ifstream file;
    std:: ofstream outfile;

    public:
    void file_replace(std::string file, std::string s1, std::string s2);
    std::string new_line(std::string line, std::string s1, std::string s2);
};


#endif