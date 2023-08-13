/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:29:26 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/13 11:57:56 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    char command[10000];
    PhoneBook   Book;

    Book.i = 0;
    std::cout << "YOU CAN USE THE COMMAND 'ADD' TO ADD A CONTACT AND 'SEARCH' TO LOOK FOR ONE AND 'EXIT' TO EXIT THE PROGRAM" << std::endl; 
    while (strcmp(command, "EXIT") != 0)
    {
        if (Book.i >= 8)
            Book.i = 0;
        std::cout << "PhoneBook$> ";
        std::cin >> command;
        if (std::cin.eof())
            exit(0);
        if (strcmp(command, "ADD") == 0)
            Book.add();
        if (strcmp(command, "SEARCH") == 0)
            Book.search();
        else if (strcmp(command, "ADD") && strcmp(command, "SEARCH") && strcmp(command, "EXIT"))
            std::cout << "COMMAND INCORRECT READ THE DISCRIPTOIN ABOVE" << std::endl;
    }
}
