/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:11:43 by ynafiss           #+#    #+#             */
/*   Updated: 2023/10/28 18:11:14 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a(1,"Bureaucra_1"), c(4,"Bureaucrat_2");
        Form b;
        Form e("BOSS", 1, 1);

        e.beSigned(a);
        a.signForm(e);
        b.beSigned(c);
        c.signForm(b);
        std::cout << a << "    " << c << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}