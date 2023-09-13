/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:31:46 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/13 16:29:51 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int argc, char **argv)
{   
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                if(isalpha(argv[i][j]))
                   std::cout << (char) toupper(argv[i][j]);
                else
                {
                    std::cout << argv[i][j];
                }
            }
        }
        std::cout << "\n";
    }
    return(0);
}