/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:11:43 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/27 15:36:56 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat highGrade(150, "me");
        Bureaucrat lowGrade(150 ,"not me");

        std::cout << highGrade << std::endl;
        std::cout << lowGrade << std::endl;

        highGrade.increment();
        lowGrade.decrement();

        std::cout << highGrade << std::endl;
        std::cout << lowGrade << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}