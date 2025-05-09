/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:29:26 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/11 10:50:50 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   Book;

    Book.i = 0;
    std::cout << ">>>   YOU CAN USE THE COMMAND 'ADD' TO ADD A CONTACT AND 'SEARCH' TO LOOK FOR ONE AND 'EXIT' TO EXIT THE PROGRAM   <<<" << std::endl; 
    std::cout << "PhoneBook$> ";
    while (command != "EXIT" && getline(std::cin, command))
    {
        if (Book.i >= 8)
            Book.i = 0;
        // getline(std::cin, command);
        check_empty_line(command, "PhoneBook$> ");
        // if (std::cin.eof())
        //     exit(0);
        if (command == "ADD")
            Book.add();
        if (command == "SEARCH")
            Book.search();
        else if (command != "ADD" && command != "SEARCH" && command !=  "EXIT")
            std::cout << "COMMAND INCORRECT READ THE DISCRIPTOIN ABOVE" << std::endl;
        std::cout << "PhoneBook$> ";
    }
}
