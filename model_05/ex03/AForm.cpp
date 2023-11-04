/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:25:07 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/01 14:39:06 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("non"), grade(1), exGrade(5){
    sign = false;
}
AForm::AForm(std::string in_name,int in_grade, int in_exgrade) : name(in_name), grade(in_grade), exGrade(in_exgrade){
    sign = false;
}

const char *  AForm::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char * AForm::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

AForm::AForm(const AForm &ori) : name(ori.name),  grade(ori.grade), exGrade(ori.exGrade){
    if (this != &ori){
        sign = ori.sign;
    }
}
AForm& AForm::operator=(const AForm & ori){
    if (this != &ori){
        sign = ori.sign;
    }
    return *this;
}

std::string AForm::getAFormName() const{
    return name;
}

bool    AForm::getAFormSign() const{
    return sign;
}

int   AForm::getAFormGrade() const{
    return grade;
}

int   AForm::getAFormExGrade() const{
    return exGrade;
}

void    AForm::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() <= grade)
        sign = true;
}
AForm::~AForm(){}