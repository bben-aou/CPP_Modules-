/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:46:46 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:11:26 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default Name"){
    this->grade = 150 ;
    std::cout << MAG "Default Constructor has been called!" RESET<< std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : name(name){
    try{
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->grade = grade ;
        std::cout << MAG "Parametrized Constructor has been called!" RESET<< std::endl;  
    }
    catch(const std::exception& e)
	{
        this->grade = grade;
		std::cerr << e.what() << std::endl;     // ! exception message (Grade too high or Grade too low) 
	}
}

Bureaucrat::~Bureaucrat(){
    std::cout << CYN "Default Destructor has been called !" RESET << std::endl;
}

std::string const Bureaucrat::getName() const{
    return (this->name);
}

unsigned int Bureaucrat::getGrade()     const{
    return (this->grade);
}

void    Bureaucrat::incrementGrade(){
    if (this->grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void    Bureaucrat::decrementGrade(){
    if (this->grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return (RED "Grade To High !" RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return (RED"Grade To Low !" RESET);
}

std::ostream& operator << (std::ostream& output, const Bureaucrat& obj){
    output << obj.getName() << ", bureaucrat grade " RESET << obj.getGrade();
    return (output);  
}