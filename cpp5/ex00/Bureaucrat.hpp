/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:55:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/11/27 16:38:13 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{   
    private:
    const std::string name;
    int grade[150];
    
    public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat& operator=(Bureaucrat const & fp);
    Bureaucrat(const Bureaucrat & fp);
    void getName();
    void getGrade();
    void incrementBureaucrat();
    void decrememtBureaucrat();
    
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & f);

#endif