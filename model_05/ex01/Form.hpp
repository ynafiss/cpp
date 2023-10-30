/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:40:50 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/29 12:34:59 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form{
    private:
        const       std::string name;
        bool        sign;
        const int   grade;
        const int   exGrade;
    public:
    	class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
        Form();
        Form(std::string in_name,int in_grade, int in_exgrade);
        std::string getFormName();
        bool		getFormSign();
        int			getFormGrade();
        int			getFormExGrade();
        void    	beSigned(Bureaucrat &bureau);
        ~Form();
                
};

#endif