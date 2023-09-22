/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:54:51 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:47:34 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Shrubbery","Default",145,137)
{
    std::cout << MAG "ShrubberyCreationFor(void) Constructor has been called !" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery", target, 145, 137)
{
    std::cout << MAG "ShrubberyCreationForm(\"" << target << "\") Constructor has been called !" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
    : AForm(obj)
{
    std::cout << MAG "ShrubberyCreationFor Copy Constructor has been called !" RESET << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator = (const ShrubberyCreationForm& obj)
{
    (void)obj;
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED "~ShrubberyCreationForm() has been called !" RESET << std::endl;
}

void    ShrubberyCreationForm::action(const Bureaucrat& obj) const{
    AForm::execute(obj);
    std::ofstream oFile(this->getTarget() + "_shrubbery");
    
    if (!oFile.is_open())
        throw std::iostream::failure("");

    oFile << "               ,@@@@@@@," << std::endl;
	oFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	oFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	oFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	oFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	oFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	oFile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	oFile << "       |o|        | |         | |" << std::endl;
	oFile << "       |.|        | |         | |" << std::endl;
	oFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    oFile.close();
}

