/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:29:42 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/05 13:32:00 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_CPP
#define CURE_CPP

#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        Cure(const Cure& ori);
        Cure&   operator=(const Cure& ori);
        AMateria* clone() const;
        void use(ICharacter &target) const;
        ~Cure();
};


#endif