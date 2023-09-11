/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:52:54 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/31 16:19:30 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cctype>

class Contact{ 
    std::string    darkest_secret;
    std::string    first_name;
    std::string    last_name;
    std::string    nickname;
    std::string    phone_number;
public:
    Contact(){
        first_name = "";
        last_name = "";
        nickname = "";
        phone_number = "";
        darkest_secret = "";
    }
    void    set_fistname(std::string name){
        first_name = name;
    }
    void    set_nickname(std::string name){
        nickname = name;
    }
    void    set_last_name(std::string name){
        last_name = name;
    }
    void    set_secret(std::string secret){
        darkest_secret = secret;
    }
    void    set_num(std::string num){
        phone_number = num;
    }
    std::string get_first(void){
        return first_name;
    }
    std::string get_last(void){
        return last_name;
    }
    std::string get_nick(void){
        return nickname;
    }
    std::string get_num(void){
        return phone_number;
    }
    std::string get_secret(void){
        return darkest_secret;
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

void    check_empty_line(std::string& value, std::string name);

#endif