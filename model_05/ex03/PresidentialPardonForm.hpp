/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:13:59 by ynafiss           #+#    #+#             */
/*   Updated: 2023/11/02 14:34:38 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string P_name);
        PresidentialPardonForm(const PresidentialPardonForm & ori);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & ori);
        void    execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
        
};



#endif