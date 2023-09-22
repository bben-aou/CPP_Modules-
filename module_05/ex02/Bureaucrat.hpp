/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:59:35 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/26 18:46:35 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AForm;

class Bureaucrat{
    private :
        std::string const   _name;
        unsigned int        _grade;
    public  :
        Bureaucrat();
        Bureaucrat(std::string const name, unsigned int grade);
        Bureaucrat(const Bureaucrat& obj);
        ~Bureaucrat();

        std::string const   getName()   const;
        unsigned int        getGrade()  const;

        void    incrementGrade();
        void    decrementGrade();
        void    signForm(AForm& form)    const;
        void    executeForm(AForm& form) const;

        class   GradeTooHighException : public std::exception{
            public  :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public  :
                const char* what() const throw();
        };

        Bureaucrat& operator = (const Bureaucrat& obj);
};

std::ostream& operator << (std::ostream& output, const Bureaucrat& obj);