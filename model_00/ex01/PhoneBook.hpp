/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:52:54 by ynafiss           #+#    #+#             */
/*   Updated: 2023/07/30 04:54:08 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact{
private:
public:
    std::string    darkest_secrt;
    std::string    first_name;
    std::string    last_name;
    std::string    nickname;
    std::string    phone_number;
    Contact(){
        first_name = "";
        last_name = "";
        nickname = "";
        phone_number = "";
        darkest_secrt = "";
    }
};

class PhoneBook{
private:
    Contact contact[8];
public:
    int i;
    void add(void);
    void search(void);
    void exit(void);

};

#endif