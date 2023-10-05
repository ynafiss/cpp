/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:41:52 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/04 16:39:28 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : Type(type){
}

std::string const & AMateria::getType() const{
    return Type;
}

void AMateria::use(ICharacter& target){
    (void)target;
}