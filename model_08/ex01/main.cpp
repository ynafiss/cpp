/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:09:25 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/29 10:04:15 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
try{Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
int array[] = {6, 17, 3, 11, 9, 8, 7, 45, 21, 59, 85, 73, 265};
std::vector<int> test(array, array + sizeof(array) / sizeof(array[0]));
Span pp(5);

pp.addRangeNumber(test.begin(), test.begin()+9);
std::cout << pp.shortestSpan() << std::endl;
std::cout << pp.longestSpan() << std::endl;}
catch (const std::exception &e){
    std::cout << e.what() << std::endl;
}
return 0;
}