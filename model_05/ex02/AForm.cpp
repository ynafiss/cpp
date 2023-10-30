/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:25:07 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/29 16:25:09 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("non"), grade(1), exGrade(5){
    sign = false;
}
AForm::AForm(std::string in_name,int in_grade, int in_exgrade) : name(in_name), grade(in_grade), exGrade(in_exgrade){
    sign = false;
}

std::string AForm::getAFormName(){
    return name;
}

bool    AForm::getAFormSign(){
    return sign;
}

int   AForm::getAFormGrade(){
    return grade;
}

int   AForm::getAFormExGrade(){
    return exGrade;
}

void    AForm::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() <= grade)
        sign = true;
}
AForm::~AForm(){}