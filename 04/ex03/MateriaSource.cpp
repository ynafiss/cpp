/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:22:20 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/12 18:29:25 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        learnedMaterias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& ori) {
    for (int i = 0; i < 4; ++i)
        learnedMaterias[i] = ori.learnedMaterias[i];
}


MateriaSource& MateriaSource::operator=(const MateriaSource& ori) {
    if (this != &ori){
        for (int i = 0; i < 4; ++i)
            learnedMaterias[i] = ori.learnedMaterias[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (learnedMaterias[i] == nullptr) {
            learnedMaterias[i] = m->clone();
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; ++i) {
        if (learnedMaterias[i] != nullptr && learnedMaterias[i]->getType() == type) {
            return learnedMaterias[i]->clone();
        }
    }
    return nullptr;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (learnedMaterias[i] != nullptr)
            delete learnedMaterias[i];
    }
}