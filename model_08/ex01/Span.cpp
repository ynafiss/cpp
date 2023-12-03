/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:53:53 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/29 11:08:35 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){};
Span::Span(unsigned int n): N(n){};
Span::~Span(){};

int Span::shortestSpan(){
    std::sort(container.begin(), container.end());
    int sh;
    std::vector<int>::iterator  it = container.begin();
    
    
    sh = *(it + 1) - *it ;
    while (it + 1< container.end()){
        if (sh > (*(it + 1) - *it )){
            sh = *(it + 1) - *it;
        }
        it++;
    }
    return sh;
}

void    Span::addNumber(int num){
    if (container.size() < N){
    container.push_back(num);
    }
    else
    throw std::runtime_error("You reach the maximum size");
}

int Span::longestSpan(){
    std::sort(container.begin(), container.end());
    int sh;
    std::vector<int>::iterator  it = container.begin();
    
    sh = *(it + (container.size() - 1)) - *it;
    return sh;
}