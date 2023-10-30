/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:27:36 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/12 18:27:25 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria *learnedMaterias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& ori);
    MateriaSource& operator=(const MateriaSource& ori);
    void learnMateria(AMateria *m);
    AMateria *createMateria(const std::string &type);
    ~MateriaSource();
};


#endif
