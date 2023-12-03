/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 06:08:41 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/29 11:08:27 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
    private:
        unsigned int N;
        std::vector<int>    container;
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        void    addNumber(int num);
        template <typename IT>
        void    addRangeNumber(IT start, IT end);
        int shortestSpan();
        int longestSpan();
        
};

template <typename IT>
void    Span::addRangeNumber(IT start, IT end){
    if (std::distance(start, end) <= (long int)(N - container.size())){
        container.insert(container.end(), start, end);
    }
    else
    throw std::runtime_error("Not enough space");
}