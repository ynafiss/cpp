/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:34:43 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/22 11:21:16 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int              value;
        static const int literal_valu = 8;
    public:
        Fixed();
        Fixed(Fixed& ori);
        Fixed& operator=(Fixed& ori);
        ~Fixed();
        int     getRawBits(void);
        void    setRawBits(int const raw);
};




#endif