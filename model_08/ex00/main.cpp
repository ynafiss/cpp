/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:09:54 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/25 05:13:05 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    int array[] = {1, 2, 3, 6, 9, 8, 7, 45, 21, 59, 85, 73, 265};
    std::vector<int> test(array, array + sizeof(array) / sizeof(array[0]));
    try{
        easyfind(test, 265);
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}