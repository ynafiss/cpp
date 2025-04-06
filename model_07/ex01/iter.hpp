/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:38:44 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/19 20:03:26 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename A, typename F>
void    iter(A address, size_t length, F func){
    size_t i = 0;
    while (i < length){
        func(address[i]);
        i++;
    }
}