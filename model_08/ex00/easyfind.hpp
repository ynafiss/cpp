/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:09:47 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/27 09:21:58 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename C>
void  easyfind(C container, int n){
    typename C::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::runtime_error("Value not found in the container");
    else
        std::cout << "Value found at index: " << std::distance(container.begin(), it) << std::endl;
}