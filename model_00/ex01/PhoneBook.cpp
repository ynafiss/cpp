/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:54:31 by ynafiss           #+#    #+#             */
/*   Updated: 2023/07/31 00:08:07 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void PhoneBook::add(void){
    std::string value;
    std::cout << "First Name : ";
    std::cin >> value;
    this->contact[i].first_name = value;
    std::cout << "Last Name : ";
    std::cin >> value;
    this->contact[i].last_name = value;
    std::cout << "Nickname : ";
    std::cin >> value;
    this->contact[i].nickname = value;
    std::cout << "Phone Number : ";
    std::cin >> value;
    this->contact[i].phone_number = value;
    std::cout << "Darkest Secret : ";
    std::cin >> value;
    this->contact[i].darkest_secrt = value;
    i++;
}

std::string resize(std::string value){
    if (value.length() > 10){
        value.resize(9, '\0');
        value.resize(10, '.');
    }
    else if (value.length() < 10)
        value.resize(10, ' ');
    return value;
}

void PhoneBook::search(void){
    int j = 0;
    std::cout << "-------------------------------------------------------"  << std::endl;
    std::cout << "|" << resize("    ID") << "|";
    std::cout << resize("First Name") << "|";
    std::cout << resize("Last Name")  << "|";
    std::cout << resize("Nickname") << "|";
    std::cout << resize("Phone Num") << "|" << std::endl;
    std::cout << "-------------------------------------------------------"  << std::endl;
    while (this->contact[j].first_name != ""){
    std::cout << "|" << "    " << j << "     " << "|";
    std::cout << resize(this->contact[j].first_name)  << "|";
    std::cout << resize(this->contact[j].last_name)  << "|";
    std::cout << resize(this->contact[j].nickname) << "|";
    std::cout << resize(this->contact[j].phone_number) << "|" << std::endl;
    std::cout << "-------------------------------------------------------"  << std::endl;
    j++;
    }
}

int main()
{
    int i = 0;
    char *command;
    PhoneBook   Book;

    Book.i = 0;
    command = strdup("NULL");
    std::cout << "YOU CAN USE THE COMMAND 'ADD' TO ADD A CONTACT AND 'SEARCH' TO LOOK FOR ONE AND 'EXIT' TO EXIT THE PROGRAM" << std::endl; 
    while (strcmp(command, "EXIT") != 0)
    {
        std::cout << "PhoneBook$> ";
        std::cin >> command;
        if (strcmp(command, "ADD") == 0)
            Book.add();
        if (strcmp(command, "SEARCH") == 0)
            Book.search();
        else if (strcmp(command, "ADD") && strcmp(command, "SEARCH") && strcmp(command, "EXIT"))
            std::cout << "COMMAND INCORRECT READ THE DISCRIPTOIN ABOVE" << std::endl;
        if (command == NULL)
            exit (1);
        if (Book.i == 8)
            i = Book.i;
        if (i >= 8)
        {
            if (i >= 16)
                i = 8;
            Book.i = (i - 8);
            i++;
        }
    }

}