/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:59:38 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:43:49 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default Name"){
    this->_grade = 150;
    std::cout << MAG "Bureaucrat Constructor has been called !" RESET<< std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name){
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade = grade;
        std::cout << MAG "Bureaucrat Parameterized Constructor has been called !" RESET << std::endl;
    }
    catch(const std::exception& e)
	{
        this->_grade = grade;
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
}

Bureaucrat::~Bureaucrat(){
    std::cout << RED "Bureaucrat Destructor has been called !" RESET << std::endl;
}

std::string const       Bureaucrat::getName() const{
    return (this->_name);
}

unsigned int  Bureaucrat::getGrade() const{
    return (this->_grade);
}

void    Bureaucrat::incrementGrade(){
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade(){
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void    Bureaucrat::signForm(AForm& form) const{
    try{
        form.beSigned(*this);
        std::cout << *this << GRN " signed " RESET<< form << std::endl;
    }
    catch(const std::exception &e){
        std::cerr << *this << RED " cannot sign " RESET<< form << " because " << e.what() << std::endl;  
    }
}

void Bureaucrat::executeForm(AForm& form) const{
    try{
        form.action(*this);
        std::cout << *this << GRN " executed " RESET<< form << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << *this << RED " cannot execute" RESET << " because : " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade To High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade To Low !");
}

std::ostream& operator << (std::ostream& output, const Bureaucrat& obj){
    output << obj.getName() << ",bureaucrat grade " << obj.getGrade();
    return output;
} 