/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 11:14:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/17 12:53:46 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    switch (random)
    {
    case 0 :
        std::cout << "A randomly generated" << std::endl;
        return reinterpret_cast<Base*>(new A);
        break;
    case 1:
        std::cout << "B randomly generated" << std::endl;
        return reinterpret_cast<Base*>(new B);
        break;   
    case 2:
        std::cout << "C randomly generated" << std::endl;
        return reinterpret_cast<Base*>(new C);
        break;   
    default:
        return nullptr;
        break;
    }
}

void identify(Base* p)
{
    A* a;
    B* b;
    C* c;

    a = dynamic_cast<A*>(p);
    if(a)
    {
        std::cout << 'A' << std::endl;
        return;
    }
    b = dynamic_cast<B*>(p);
    if(b)
    {
        std::cout << 'B' << std::endl;
        return;
    }
    c = dynamic_cast<C*>(p);
    if(c)
    {
        std::cout << 'C' << std::endl;
        return;
    }
    std::cout << "Undefined type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << 'A' << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << 'B' << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << 'C' << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "Undefined type" << std::endl;
            }
            
        }
        
    }
}


int main(void)
{
    std::cout << "Random Base Generator" << std::endl;

    Base* base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << "identify A" << std::endl;
    A* a = new A;
    identify(a);
    identify(*a);
    delete a;

    std::cout << "identify B" << std::endl;
    B* b = new B;
    identify(b);
    identify(*b);
    delete b;

    std::cout << "identify C" << std::endl;
    C* c = new C;
    identify(c);
    identify(*c);
    delete c;
}