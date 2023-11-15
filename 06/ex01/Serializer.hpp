/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:14:16 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/15 16:07:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <stdint.h>
#include <iostream>


class Serializer{
    private:
        Serializer();
    public:
        Serializer(const Serializer& ori);
        Serializer& operator=(const Serializer& ori);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};