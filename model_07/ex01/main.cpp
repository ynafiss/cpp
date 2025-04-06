/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:44:25 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/19 20:02:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    function(char& i){
    i++;
}

int main(){
    char arr[4] = "tes";
    iter(arr, 4.3, &function);
    for (int i = 0; i < 4; i++){
        std::cout << arr[i] << std::endl;
    }
}