/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:21:32 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 10:09:25 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Presidential","Default", 25, 5)
{
    std::cout << MAG "PresidentialPardonForm(void) has been called !" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential", target, 25, 5)
{
    std::cout << MAG "PresidentialPardonForm(\"" << target << "\") has been called !" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
    : AForm(obj)
{
    std::cout << MAG "PresidentialPardonForm() copy constructor has been called !" RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << RED "~PresidentialPardonForm() Destructor has been called !" RESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& obj){
    AForm::operator = (obj);
    return (*this);
}

void PresidentialPardonForm::action(const Bureaucrat& obj) const{
    AForm::execute(obj);
    std::cout << this->getTarget() << YEL " has been pardoned by Zafod Beeblebrox." RESET<< std::endl;
}