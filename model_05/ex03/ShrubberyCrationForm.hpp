/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCrationForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:19:51 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 15:51:53 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCRATIONFORM_HPP
#define SHRUBBERYCRATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class ShrubberyCrationForm : public AForm{
    private:
        std::string target;
    public:
    	ShrubberyCrationForm();
		ShrubberyCrationForm(const ShrubberyCrationForm & ori);
		ShrubberyCrationForm& operator=(const ShrubberyCrationForm & ori);
        ShrubberyCrationForm(std::string target);
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCrationForm();
};


#endif