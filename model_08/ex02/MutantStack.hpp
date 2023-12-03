/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:14:42 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/29 11:06:58 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <list>
#include <stack>
#include <iostream>
#include <algorithm>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
		MutantStack();
		MutantStack(MutantStack const &ori);
		MutantStack  &operator = (MutantStack const &ori);
		~MutantStack();
        iterator begin();
        iterator end();
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator = (MutantStack const &ori){
    this->c = ori.c;
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(){}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(){}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin(){
    return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end(){
    return this->c.end();
}