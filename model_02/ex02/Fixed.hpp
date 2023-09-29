/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:19:57 by ynafiss           #+#    #+#             */
/*   Updated: 2023/09/28 21:51:44 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int              value;
        static const int literal_value = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        Fixed(const Fixed& ori);
        Fixed& operator=(const Fixed& ori);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed operator+(const Fixed& A);
        Fixed operator-(const Fixed& A);
        Fixed operator*(const Fixed& A);
        Fixed operator/(const Fixed& A);
        bool    operator>(const Fixed& A) const;
        bool    operator<(const Fixed& A) const;
        bool    operator>=(const Fixed& A) const;
        bool    operator<=(const Fixed& A) const;
        bool    operator==(const Fixed& A) const;
        bool    operator!=(const Fixed& A) const;
        static float   min(const Fixed& A, const Fixed& B);
        static float   max(const Fixed& A, const Fixed& B);
        static float   min(Fixed& A, Fixed& B);
        static float   max(Fixed& A, Fixed& B);
        int   toInt(void) const;
        float toFloat(void) const;
        ~Fixed();
        int     getRawBits(void);
        void    setRawBits(int const raw);
};

std::ostream&   operator << (std::ostream& output, const Fixed&  ori);



#endif