/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:31:19 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:53:05 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _name("Default AForm's Name"), _target(""), _signed(false), _gradeSign(1), _gradeExec(1){
    std::cout << MAG "AForm Constructor has been called !" RESET << std::endl; 
}

AForm::AForm(const std::string& name, const std::string& target)
    : _name(name), _target(target), _signed(false), _gradeSign(1), _gradeExec(1)
{
    std::cout << MAG "Parametrized Constructor AForm(\"" << name << "\") has been called !" RESET << std::endl;
}

AForm::AForm(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec)
    : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _target(""), _signed(false)
{
    try{
        if (gradeSign < 1 || gradeExec < 1)
            throw AForm::GradeTooHighException();
        else if (gradeSign > 150 || gradeExec > 150)
            throw AForm::GradeTooLowException();
        std::cout << MAG "Parametrized Constructor AForm(\"" << name << " ,gradeSign ,gradeExec" << "\") has been called !" RESET << std::endl;        
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
}

AForm::AForm(const std::string& name, const std::string& target, const unsigned int gradeSign, const unsigned int gradeExec)
    : _name(name), _target(target), _gradeSign(gradeSign), _gradeExec(gradeExec) , _signed(false)
{
    try{
        if (gradeSign < 1 || gradeExec < 1)
            throw AForm::GradeTooHighException();
        else if (gradeSign > 150 || gradeExec > 150)
            throw AForm::GradeTooLowException();
        std::cout << MAG "Parametrized Constructor AForm(\"" << name << ", " << target << " ,gradeSign ,gradeExec" << "\") has been called !" RESET << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
}

AForm::AForm(const AForm& obj)
    : _name(obj._name), _target(obj._target), _signed(obj._signed), _gradeSign(obj._gradeSign), _gradeExec(obj._gradeExec)
{
    std::cout << MAG "AForm Copy Constructor has been called !" RESET << std::endl;
}

AForm::~AForm(){
    std::cout << RED "AForm Destructor has been called !" RESET << std::endl;
}

AForm& AForm::operator = (const AForm& obj){
    (void)obj;
    return (*this);
}

std::string AForm::getName()  const{
    return (this->_name);
}

std::string AForm::getTarget()  const{
    return (this->_target);
}

unsigned int AForm::getGradeSign()  const{
    return (this->_gradeSign);
}

unsigned int AForm::getGradeExec()  const{
    return (this->_gradeExec);
}

bool    AForm::isSigned() const{
    return (this->_signed);
}

void    AForm::beSigned(const Bureaucrat& obj){
     if (!this->_signed)
    {
        if (obj.getGrade() <= this->_gradeSign)
            this->_signed = true;
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw AForm::FormAlreadySignedException();
}

void    AForm::execute(const Bureaucrat& obj) const{
    if (!this->isSigned())
        throw AForm::FormIsNotSignedException();
    if (obj.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw(){
    return ("Grade To High !");
}

const char* AForm::GradeTooLowException::what() const throw(){
    return ("Grade To Low !");
}

const  char* AForm::FormAlreadySignedException::what() const throw(){
    return ("Form is ALREADY signed !");
}

const char* AForm::FormIsNotSignedException::what() const throw(){
    return ("Form is NOT signed !");
}

std::ostream& operator << (std::ostream& output, const AForm& obj){
    output << YEL "AForm " RESET << obj.getName() << ": ";
    output << BLU "[signed: " RESET << std::boolalpha << obj.isSigned() << BLU ", gradeSign: " RESET << obj.getGradeSign() << BLU ", gradeExec : " RESET << obj.getGradeExec() << BLU "]" RESET;
    return (output); 
}
