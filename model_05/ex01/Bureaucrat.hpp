/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:04:08 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/28 18:06:57 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat{
    private:
		const std::string name;
		int	grade;
	public:
		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
		Bureaucrat();
		Bureaucrat(int _grade, std::string _name);
		Bureaucrat(const Bureaucrat& ori);
		Bureaucrat& operator=(const Bureaucrat& ori);
		std::string getName() const;
		int 		getGrade() const;
		void			signForm(Form& form);
		void		increment();
		void		decrement();
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif