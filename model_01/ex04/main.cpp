/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:21:29 by ynafiss           #+#    #+#             */
/*   Updated: 2023/08/17 09:44:16 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

int main(int ac, char **av)
{
    if (ac != 4){
        std::cout << "invalid number of argument !" << std::endl;
        exit (1);
    }
    std::string     av_3 = av[3];
    std::string     av_1 = av[1];
    std::string     av_2 = av[2];
    std::ifstream   inputFile(av[1]);
    char            *out = new char[(av_1.length() + 9)];
    strcpy(out, av[1]);
    strcat(out, ".replace");
    std::ofstream   outputFile(out);
    std::string     line;
    size_t          position;
    std::string     newLine;

    delete []out;
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input file !" << std::endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open output file !" << std::endl;
        return 1;
    }
    while (std::getline(inputFile, line)) {
        position = line.find(av[2], 0);
        while(position != std::string::npos)
        {        
            line.erase(position, av_2.length());
            line.insert(position, av_3);
            position += av_3.length();
            position = line.find(av_2, position);
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
