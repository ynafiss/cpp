/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:52:59 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/01 14:45:38 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("non", 25, 5){
    target = "non";
}

PresidentialPardonForm::PresidentialPardonForm(std::string in_target) : AForm(in_target, 25, 5){
    target = in_target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & ori) : AForm(ori){
    target = ori.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & ori){
    if(this != &ori)
    {
        target = ori.target;
    }
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (getAFormSign() && executor.getGrade() <= 25 && getAFormExGrade() <= 5){
        std::cout << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else{
        throw AForm::GradeTooLowException();
    }
}
