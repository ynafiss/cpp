/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 04:54:44 by ynafiss           #+#    #+#             */
/*   Updated: 2023/07/30 04:54:47 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char    a;

    (void)ac;
    if (!av[1])
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            a = toupper(av[i][j]);
            std::cout << a;
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}