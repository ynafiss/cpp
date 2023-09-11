/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:54:31 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/26 13:41:22 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    check_empty_line(std::string& value, std::string name){
    while (value == "")
    {
        std::cout << ">> EMPTY LINE IS NOT VALID !! <<\n";
        std::cout << name;
        std::getline(std::cin, value);
    }
}



void PhoneBook::add(void){
    std::string value;
    std::cout << "First Name : ";
    std::getline(std::cin, value);
    check_empty_line(value, "First Name : ");
    this->contact[i].set_fistname(value);
    std::cout << "Last Name : ";
    std::getline(std::cin, value);
    check_empty_line(value, "Last Name : ");
    this->contact[i].set_last_name(value);
    std::cout << "Nickname : ";
    std::getline(std::cin, value);
    check_empty_line(value, "Nickname : ");
    this->contact[i].set_nickname(value);
    std::cout << "Phone Number : ";    
    std::getline(std::cin, value);
    check_empty_line(value, "Phone Number : ");
    this->contact[i].set_num(value);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, value);
    check_empty_line(value, "Darkest Secret : ");
    this->contact[i].set_secret(value);
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

    std::cout << "---------------------------------------------"  << std::endl;
    std::cout << "|" << resize("    ID") << "|";
    std::cout << resize("First Name") << "|";
    std::cout << resize("Last Name")  << "|";
    std::cout << resize("Nickname") << "|" << std::endl;
    std::cout << "---------------------------------------------"  << std::endl;
    while (++j < 8 && this->contact[j].get_first() != ""){
    std::cout << "|" << "    " << j << "     " << "|";
    std::cout << resize(this->contact[j].get_first())  << "|";
    std::cout << resize(this->contact[j].get_last())  << "|";
    std::cout << resize(this->contact[j].get_nick()) << "|" << std::endl;
    std::cout << "---------------------------------------------"  << std::endl;
    }
    std::cout << "ENTER CONTACT INDEX : ";
    getline(std::cin, num);
    if (isalpha(num[0])){
        std::cout << "INVALID INPUT" << std::endl;
        return;
    }
    if (num.length() > 1){
        std::cout << "INDEX OUT OF RANGE" << std::endl;
        return;
    }
    if (isdigit(num[0]) == 1)
        i = stoi(num);
    else{
        std::cout << "INVALID INPUT" << std::endl;
        return;
    }
    if ((j - 1) < 0 || i > (j - 1) || i < 0)
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
    std::cout << resize(this->contact[i].get_first())  << "|";
    std::cout << resize(this->contact[i].get_last())  << "|";
    std::cout << resize(this->contact[i].get_nick()) << "|";
    std::cout << resize(this->contact[i].get_secret()) << "|";
    std::cout << resize(this->contact[i].get_num()) << "|" << std::endl;
    std::cout << "-------------------------------------------------------------------"  << std::endl;
}
