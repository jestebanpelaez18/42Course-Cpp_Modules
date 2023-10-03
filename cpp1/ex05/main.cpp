/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 18:00:36 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl Complain;

    Complain.complain("DEBUG");
    Complain.complain("INFO");
    Complain.complain("WARNING");
    Complain.complain("ERROR");

    return(0);
}