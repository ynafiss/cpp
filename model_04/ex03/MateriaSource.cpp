/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:22 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/06 10:45:18 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++){
        learnedMateria[i] = NULL;
    }
}

void    MateriaSource::learnMateria(AMateria *m){
    for (int i = 0; i < 4; i++){
        if(learnedMateria[i] == NULL){
            learnedMateria[i] = m->clone();
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type){
    for(int i = 0; i < 4; i++){
        if (learnedMateria[i] != NULL && learnedMateria[i]->getType() == type)
            return learnedMateria[i]->clone();
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        if (learnedMateria[i] != NULL)
            delete learnedMateria[i];
    }
}