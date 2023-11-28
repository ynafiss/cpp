/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:14:42 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/28 10:51:26 by ynafiss          ###   ########.fr       */
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
		MutantStack(){};
		MutantStack(MutantStack const &ori) : std::stack<T, Container>(ori) {
        }
		MutantStack const &operator = (MutantStack const &ori){
            this->c = ori.c;
            return *this;
        }
		~MutantStack(){};
        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
};

