/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:37:32 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/11/27 16:42:46 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(name), grade()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;     
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Default Bureaucrat destructor called" << std::endl; 
}