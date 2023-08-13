/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:54:31 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/13 12:10:36 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    this->contact[i].darkest_secret = value;
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
    int j = -1;
    size_t i = 0;
    std::string num;

    std::cout << "--------------------------------------------------------"  << std::endl;
    std::cout << "|" << resize("    ID") << "|";
    std::cout << resize("First Name") << "|";
    std::cout << resize("Last Name")  << "|";
    std::cout << resize("Nickname") << "|";
    std::cout << resize("Phone Num") << "|" << std::endl;
    std::cout << "--------------------------------------------------------"  << std::endl;
    while (++j < 8 && this->contact[j].first_name != ""){
    std::cout << "|" << "    " << j << "     " << "|";
    std::cout << resize(this->contact[j].first_name)  << "|";
    std::cout << resize(this->contact[j].last_name)  << "|";
    std::cout << resize(this->contact[j].nickname) << "|";
    std::cout << resize(this->contact[j].phone_number) << "|" << std::endl;
    std::cout << "--------------------------------------------------------"  << std::endl;
    }
    std::cout << "ENTER CONTACT INDEX : ";
    std::cin >> num;
    if (num.length() > 1){
        std::cout << "INDEX OUT OF RANGE" << std::endl;
        return;
    }
    i = stoi(num);
    if (i > j || i < 0)
    {
        std::cout << "INDEX OUT OF RANGE" << std::endl;
        return;
    }
    std::cout << "-------------------------------------------------------------------"  << std::endl;
    std::cout << "|" << resize("    ID") << "|";
    std::cout << resize("First Name") << "|";
    std::cout << resize("Last Name")  << "|";
    std::cout << resize("Nickname") << "|";
    std::cout << resize("DARKESR SECRET") << "|";
    std::cout << resize("Phone Num") << "|" << std::endl;
    std::cout << "------------------------------------------------------------------"  << std::endl;
    std::cout << "|" << "    " << i << "     " << "|";
    std::cout << resize(this->contact[i].first_name)  << "|";
    std::cout << resize(this->contact[i].last_name)  << "|";
    std::cout << resize(this->contact[i].nickname) << "|";
    std::cout << resize(this->contact[i].darkest_secret) << "|";
    std::cout << resize(this->contact[i].phone_number) << "|" << std::endl;
    std::cout << "-------------------------------------------------------------------"  << std::endl;
}
