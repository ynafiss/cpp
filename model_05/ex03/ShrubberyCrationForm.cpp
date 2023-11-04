/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCrationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:22:55 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 15:51:24 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCrationForm.hpp"

ShrubberyCrationForm::ShrubberyCrationForm(std::string in_target) : AForm(in_target, 145, 137){
    target = in_target;
}


ShrubberyCrationForm::ShrubberyCrationForm() : AForm("non", 25, 5){
    target = "non";
}


ShrubberyCrationForm::ShrubberyCrationForm(const ShrubberyCrationForm & ori) : AForm(ori), target(ori.target){ 
}

ShrubberyCrationForm& ShrubberyCrationForm::operator=(const ShrubberyCrationForm & ori){
    if (this != &ori){
        target = ori.target;
    }
    return *this;
}

void ShrubberyCrationForm::execute(Bureaucrat const & executor) const{
    if (getAFormSign() && executor.getGrade() <= 145 && getAFormExGrade() <= 137){
            std::string f_name = target + "_shrubbery";
            std::ofstream  file(f_name.c_str());
            file << "            \n";
            file <<"    ,,,.   ,\n";
            file <<" ,&%%&%&&%,\n";
            file <<",%&\\%&&%&&%,\n";
            file <<"%&&%&%&/%&&%\n";
            file <<"%&&%/ %&%%&&\n";
            file <<"`&%\\ ` /%&'\n";
            file <<"    |o|     \n";
            file <<"    |.|     \n";
            file <<" \\/ ._\\//_/";
            file.close();
    }
    else{
        throw AForm::GradeTooLowException();
    }
}

ShrubberyCrationForm::~ShrubberyCrationForm(){
}