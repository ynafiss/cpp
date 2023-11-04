/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:01:36 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/01 14:41:00 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("None"), grade(1){
}

Bureaucrat::Bureaucrat(const Bureaucrat& ori) : name(ori.name) ,grade(ori.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ori){
    if (this != &ori){
        grade = ori.grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
        return grade;
}

void	Bureaucrat::increment(){
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

void	Bureaucrat::decrement(){
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(int _grade, std::string _name) : name(_name){
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
    grade = _grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

Bureaucrat::~Bureaucrat(){};


std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}