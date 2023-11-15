/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:32:32 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/15 18:54:34 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base*   generate(void){
    int i = rand() % 3;
    switch(i){
        case 0:
        return dynamic_cast<Base *>(new A);
        case 1:
        return dynamic_cast<Base *>(new B);
        case 2:
        return dynamic_cast<Base *>(new C);
        default:
            return NULL;
    }
}

void    identify(Base *p){
    if (A* a = dynamic_cast<A*>(p)){
        (void)a;
        std::cout << "The actual type of the object is 'class A'" << std::endl;
    }
    if (B* b = dynamic_cast<B*>(p)){
        (void)b;
        std::cout << "The actual type of the object is 'class B'" << std::endl;
    }
    if (C* c = dynamic_cast<C*>(p)){
        (void)c;
        std::cout << "The actual type of the object is 'class C'" << std::endl;
    }
}

void    identify(Base& p){
   try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "The actual type of the object is 'class A'" << std::endl;
        return ;
   }
    catch(const std::exception & e){
        try{
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "The actual type of the object is 'class B'" << std::endl;
            return ;
        }
        catch(const std::exception & e){
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "The actual type of the object is 'class C'" << std::endl;
                return ;
    }
    }
}