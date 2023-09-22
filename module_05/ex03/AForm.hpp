/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:31:22 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:57:25 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class   Bureaucrat;


#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

class  AForm{
    private :
        const std::string   _name;
        const std::string   _target;
        bool                _signed;
        const unsigned int  _gradeSign;
        const unsigned int  _gradeExec;
    
    public :
        AForm( );
        AForm(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
        AForm(const std::string& name, const std::string& target);
        AForm(const std::string& name, const std::string& target, const unsigned int gradeSign, const unsigned int gradeExec);
        AForm(const AForm& obj);
        ~AForm( );


        std::string     getName()       const;
        std::string     getTarget()     const;
        unsigned int    getGradeSign()  const;
        unsigned int    getGradeExec()  const;
        bool            isSigned()      const;
        
        void    beSigned(const Bureaucrat& obj);
        void    execute(const Bureaucrat& obj) const;
        virtual void    action(const Bureaucrat& obj) const = 0;
        
        class  GradeTooHighException : public std::exception{
            public :
                const char* what() const throw();
        };

        class  GradeTooLowException : public std::exception{
            public  :
                const char* what() const throw();
        };
        
        class  FormAlreadySignedException : public std::exception{
            public  :
                const char* what() const throw();
        };

        class  FormIsNotSignedException : public std::exception{
            public :
                const char* what() const throw();
        };
        
        AForm& operator = (const AForm& obj);
};

std::ostream& operator << (std::ostream& output, const AForm& form);
