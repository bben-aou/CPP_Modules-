/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:39:01 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 09:19:01 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


# include <iostream>
# include <string>

class Bureaucrat;


#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

class Form{
    private :
        std::string const   _name;
        bool                _signed;
        const unsigned int  _gradeSign;
        const unsigned int  _gradeExec; 
        Form();
    public  :
        Form(const std::string& name);
        Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
        Form(const Form& obj);
        ~Form( );
        
        Form& operator = (const Form& obj);

        std::string     getName()   const;
        unsigned int    getGradeSign()  const;
        unsigned int    getGradeExec()  const;
        bool            isSigned()      const;
        void            beSigned(const Bureaucrat& obj);

        class  GradeTooHighException : public std::exception{
            public  :
                const char* what() const throw();
        };
        
        class  GradeTooLowException : public std::exception{
            public  :
                const  char* what() const throw();
        };

        class  FormAlreadySignedException : public std::exception{
            public  :
                const char* what() const throw();
        };
};

std::ostream& operator << (std::ostream& output, const Form& obj); 
