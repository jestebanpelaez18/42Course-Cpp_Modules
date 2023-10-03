/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 17:02:52 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

std::string Files::new_line(std::string line, std::string s1, std::string s2)
{
    std::string new_line;
    size_t foundPos = line.find(s1);
    while(foundPos != std::string::npos)
    {
        line.erase(foundPos,s1.length());
        line.insert(foundPos,s2);
        foundPos = line.find(s1);
    }
    new_line = line;
    return(new_line);
}
void Files::file_replace(std::string filename, std::string s1, std::string s2)
{
    file.open(filename,std::ios::out);
    if(!file.is_open())
    {
        std::cout << "Error trying to open the file" << std::endl;
        return ;
    }
    outfile.open(filename + ".replace", std::ios::out);
     if(!outfile.is_open())
    {
        std::cout << "Error trying to open the outfile" << std::endl;
        file.close();
        return ;
    }
    std::string line;
    while(getline(file, line))
           outfile << new_line(line,s1,s2) << std::endl;
    file.close();
    outfile.close();
    return ;
}

