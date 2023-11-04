/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:28:13 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/05 13:31:49 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CPP
#define ICE_CPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        Ice(const Ice& ori);
        Ice&   operator=(const Ice& ori);
        AMateria* clone() const;
        void use(ICharacter &target) const;
        ~Ice();
};


#endif