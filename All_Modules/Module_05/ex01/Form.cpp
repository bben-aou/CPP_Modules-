/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:56:23 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:24:19 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _name("Default Form's Name"), _signed(false), _gradeSign(1), _gradeExec(1){
    std::cout << MAG "Form Constructor has been called !" RESET << std::endl; 
}

Form::Form(const std::string& name) : _name(name), _signed(false), _gradeSign(1), _gradeExec(1){
    std::cout << "Parametrized Constructor Form(\"" << name << "\") has been called !" << std::endl;
}

Form::Form(const std::string& name,const unsigned int gradeSign, const unsigned int gradeExec)
    : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    try{
        if (gradeSign < 1 || gradeExec < 1)
            throw Form::GradeTooHighException();
        else if (gradeSign > 150 || gradeExec > 150)
            throw Form::GradeTooLowException();
        std::cout << MAG  "Parametrized Constructor Form(\"" << name << " ,gradeSign ,gradeExec" << "\") has been called !" RESET << std::endl;        
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
}

Form::Form(const Form& obj) 
    : _name(obj._name), _signed(obj._signed), _gradeSign(obj._gradeSign), _gradeExec(obj._gradeExec)
{
    std::cout << MAG "Form Copy Constructor has been called !" RESET << std::endl;
}

Form::~Form(){
    std::cout << CYN "Form Destructor has been called !" RESET << std::endl;
}

Form& Form::operator = (const Form& obj){
    (void)obj;
    return (*this);
}

unsigned int    Form::getGradeSign() const{
    return (this->_gradeSign);
}

unsigned int    Form::getGradeExec() const{
    return (this->_gradeExec);
}

std::string     Form::getName() const{
    return (this->_name);
}

bool    Form::isSigned() const{
    return (this->_signed);
}

void    Form::beSigned(const Bureaucrat& obj){
    if (!this->_signed)
    {
        if (obj.getGrade() <= this->_gradeSign)
            this->_signed = true;
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::FormAlreadySignedException();
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("Grade To High !");
}

const char* Form::GradeTooLowException::what() const throw(){
    return ("Grade To Low !");
}

const  char* Form::FormAlreadySignedException::what() const throw(){
    return ("Form is already signed !");
}

std::ostream& operator << (std::ostream& output , const Form& obj){
    output << YEL "Form " RESET << obj.getName() << ": ";
    output << BLU  "-[ Signed : " RESET << std::boolalpha << obj.isSigned() << BLU  ", gradeSign : " RESET<< obj.getGradeSign() << BLU  ", gradeExec : " RESET << obj.getGradeExec() << BLU " ]-" RESET;
    return (output);
}