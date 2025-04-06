/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:06:26 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/19 19:20:06 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void    swap(T& value_1, T& value_2){
    T tmp = value_1;
    value_1 = value_2;
    value_2 = tmp;
}

template <typename T>
T&  min(T& value_1, T& value_2){
    if (value_1 > value_2)
        return value_2;
    else if (value_1 < value_2)
        return value_1;
    else
        return value_2;
}


template <typename T>
T&  max(T& value_1, T& value_2){
    if (value_1 > value_2)
        return value_1;
    else if (value_1 < value_2)
        return value_2;
    else
        return value_2;
}