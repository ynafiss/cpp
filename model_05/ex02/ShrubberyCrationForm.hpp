/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCrationForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:19:51 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/29 18:14:31 by ynafiss          ###   ########.fr       */
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
        ShrubberyCrationForm(std::string target);
        void execute(Bureaucrat const & executor) const{
            if (getAFormSign() && executor.getGrade() <= 145 && getAFormExGrade() <= 137){
                    std::ofstream  file(target + "_shrubbery");
                    file << "            \n";
                    file <<"    ,,,.   ,\n";
                    file <<" ,&%%&%&&%,\n";
                    file <<",%&\\%&&%&&%,\n";
                    file <<"%&&%&%&/%&&%\n";
                    file <<"%&&%/ %&%%&&\n";
                    file <<"`&%\\ ` /%&'\n";
                    file <<"    |o|     \n";
                    file <<"    |.|     \n";
                    file <<" \\/ ._\\//_/";
                    file.close();
            }
        }
}


#endif