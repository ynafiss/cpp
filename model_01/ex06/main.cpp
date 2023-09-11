/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:26:44 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/17 12:33:27 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl men;
    if (ac != 2){
        std::cout << "Invalid Number Of Argument" << std::endl;
        return 1;
    }
    men.complain(av[1]);
}