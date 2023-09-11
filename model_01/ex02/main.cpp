/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:50:18 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/13 16:01:53 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string     str = "HI THIS IS BRAIN";
    std::string&    stringREF = str;
    std::string*    stringPTR = &str;
    
    std::cout << &str << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << str << std::endl;
    std::cout << stringREF << std::endl;
    std::cout << *stringPTR << std::endl;
}