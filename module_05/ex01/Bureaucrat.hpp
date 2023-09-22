/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:07:40 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/25 19:40:31 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Form;

class Bureaucrat{
    private :
        std::string const   name;
        unsigned    int     grade;
    public  :
        Bureaucrat( );
        Bureaucrat(std::string const, unsigned int grade);
        Bureaucrat(const Bureaucrat& obj);
        ~Bureaucrat( );

        std::string  const   getName()   const ;
        unsigned int     getGrade()  const ;
        
        void    incrementGrade();
        void    decrementGrade();
        void    signForm(Form& form) const ;
        
        class GradeTooHighException : public std::exception{
            public :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception{
            public :
                const char* what() const throw();
        };
        
        Bureaucrat& operator = (const Bureaucrat& obj);
};

std::ostream& operator << (std::ostream& output, const Bureaucrat& obj);
