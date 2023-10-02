/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:09:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/02 18:15:00 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

void file_replace(std::ifstream& file, std::string s1, std::string s2)
{
    std::ifstream file("test1");
    std::ifstream outputfile("test1.compare");

    if(file.is_open())
    {
        while(std::getline(file, Files::line))
        {
            
        }
        
    }
    
}