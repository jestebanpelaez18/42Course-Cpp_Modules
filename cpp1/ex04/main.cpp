/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:45:57 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 16:01:56 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Files.hpp"

int main(int argc, char **argv)
{   
    if(argc == 4)
    {
        Files replace;

        replace.file_replace(argv[1], argv[2], argv[3]);
    }
    else
        std::cout << "Wrong number of parameters" << std::endl;
    return(0);
}