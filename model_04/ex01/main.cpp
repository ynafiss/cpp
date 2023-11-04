/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:00:26 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/01 15:45:25 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* j[10];
    
    for (int i = 0; i < 10 ;i++){
        if (i < 5)
            j[i] = new Dog();
        else
            j[i] = new Cat();
    }
        for (int i = 0; i < 10; ++i) {
        delete j[i];
    }

return 0;
}