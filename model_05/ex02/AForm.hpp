/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:53:58 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/29 14:59:27 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm{
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
        AForm();
        AForm(std::string in_name,int in_grade, int in_exgrade);
        std::string getAFormName();
        bool		getAFormSign();
        int			getAFormGrade();
        int			getAFormExGrade();
        void    	beSigned(Bureaucrat &bureau);
        virtual void        execute(Bureaucrat const & executor) const = 0;
        ~AForm();
                
};

#endif