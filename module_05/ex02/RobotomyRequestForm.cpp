/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:47:26 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:46:44 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("robotomy", "Default", 72, 45)
{
    std::cout << MAG "RobotomyRequestForm(void) Destructor has been called !" RESET<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("robotomy", target, 72, 45)
{
    std::cout << MAG "RobotomyRequestForm(\"" << target << "\") has been called !" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
    : AForm(obj)
{
    std::cout << MAG "RobotomyRequestForm() copy constructor has been called !" RESET << std::endl;        
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << RED "~RobotomyRequestForm() has been called !" RESET<< std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj){
    (void)obj;
    return(*this);
}

void    RobotomyRequestForm::action(const Bureaucrat& obj) const{
    AForm::execute(obj);
    std::cout << YEL " !! drilling noises !!" RESET << std::endl;
    
    static int  i;
    if ( i % 2 == 0 )
        std::cout << this->getTarget() << GRN " has been robotomized successfully." RESET << std::endl;
    else
        std::cout << YEL "Robotomy on " RESET << this->getTarget() << GRN " has failed." RESET << std::endl;
    i++;
}