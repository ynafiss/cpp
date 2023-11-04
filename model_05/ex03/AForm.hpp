/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:53:58 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/31 18:35:29 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

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
        AForm(const AForm &ori);
        AForm& operator=(const AForm & ori);
        AForm(std::string in_name,int in_grade, int in_exgrade);
        std::string getAFormName() const;
        bool		getAFormSign() const;
        int			getAFormGrade() const;
        int			getAFormExGrade() const;
        void    	beSigned(Bureaucrat &bureau);
        virtual void        execute(Bureaucrat const & executor) const = 0;
        ~AForm();
                
};

#endif