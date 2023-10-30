/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:33:43 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/28 18:10:12 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("non"), grade(1), exGrade(5){
    sign = false;
}
Form::Form(std::string in_name,int in_grade, int in_exgrade) : name(in_name), grade(in_grade), exGrade(in_exgrade){
    sign = false;
}

std::string Form::getFormName(){
    return name;
}

bool    Form::getFormSign(){
    return sign;
}

int   Form::getFormGrade(){
    return grade;
}

int   Form::getFormExGrade(){
    return exGrade;
}

void    Form::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() <= grade)
        sign = true;
}
Form::~Form(){}