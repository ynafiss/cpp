/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:42:53 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/22 08:43:16 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h> 

template<typename T>
class Array{
    private:
        T*   element;
        unsigned int arraysize;
    public:
        Array(){
            arraysize = 0;
            element = NULL;
        }
        Array(unsigned int n) : arraysize(n){
            element = new T[arraysize];
        }
        Array(const Array& ori) : arraysize(ori.arraysize){
            element = new T[arraysize];
            for (unsigned int i = 0; i < arraysize; i++){
                element[i] = ori.element[i];
            }
        }
        Array& operator=(const Array& ori){
            delete [] element ;
            element = new T[ori.size];
            for (unsigned int i = 0; i < arraysize; i++){
                
                element[i] = ori.element[i];
            }
        }
        T& operator[](unsigned int i) const{
            if (i >= arraysize)
                throw std::runtime_error("out of range");
            return element[i];
        }
        unsigned int size() const{
            return arraysize;
        }
};