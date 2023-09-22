/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:05:16 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/04 12:02:02 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void    myReplace(char **argv){
    std::string     fileName(argv[1]) ;
    std::string     s1(argv[2])       ;
    std::string     s2(argv[3])       ;

    std::ifstream   input_file(fileName);
    if (input_file.good()){
        if(input_file.peek() == std::ifstream::traits_type::eof())
            std::cout << " - Error - : File is Empty !" << std::endl;
        else{
            std::ofstream output_file(fileName.append(".replace"));
            while (input_file.good() && output_file.good()){
                std::string     line  ; 
                std::size_t     found ;
                std::getline(input_file, line);
                found = line.find(s1, 0);
                while (found != std::string::npos)
                {
                    line.erase(found, s1.length()) ;
                    line.insert(found, s2)         ;
                    found = line.find(s1, found)   ;
                }
                output_file << line;
                if(input_file.eof())
                    break;
                output_file << std::endl;
            }
            input_file.close()  ;
            output_file.close() ;
        }
    }
    else
		std::cout << "Error : Something Wrong !!" << std::endl;
}


int main(int argc, char **argv){
    if (argc == 4)
        myReplace(argv);
    else
        std::cout << " - Error - : Syntax : ./replace <filename> <s1> <s2>" << std::endl;
}