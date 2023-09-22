/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:41:01 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 10:11:54 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){
    std::cout << MAG "Intern() Constructor has been called !" RESET<< std::endl;
}

Intern::~Intern(){
    std::cout << RED "~Intern() Destructor has been called !" RESET<< std::endl; 
}

const char* Intern::InvalidFormException::what() const throw(){
    return ("Invalid Form Type !");
}

AForm*  Intern::makeForm(const std::string& fname, const std::string& target) const{
    std::string     forms[3] = {
        "shrubbery creation",
		"robotomy request",
		"presidential pardon"
    };
    int i = 0;
    while (i < 3 && forms[i] != fname)
        i++;
    AForm *form = NULL;
    switch(i){
        case 0 :
            form = new ShrubberyCreationForm(target);
            break;
        case 1 :
            form = new RobotomyRequestForm(target);
            break;
        case 2 :
            form = new PresidentialPardonForm(target);
            break;
        default :
            throw Intern::InvalidFormException();
    }
    std::cout << YEL "Intern " RESET << GRN "creates " RESET<< fname << std::endl;
    return form;
}
