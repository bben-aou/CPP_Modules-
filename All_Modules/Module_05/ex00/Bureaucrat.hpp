/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:46:43 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 08:39:21 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

# include <iostream>
# include <string>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"


class Bureaucrat{
    private :
        std::string const      name  ;
        unsigned int           grade ;
    public  :
        Bureaucrat( );
        Bureaucrat(std::string const name, unsigned int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator = (const Bureaucrat& obj);
        ~Bureaucrat();

        std::string const  getName()  const ;
        unsigned int       getGrade() const ;

        void    incrementGrade() ;
        void    decrementGrade() ;

        class GradeTooHighException : public std::exception{
            public :
                const char* what() const throw();
                /*{
                    return ("Grade To High !");
                }*/
        };
       
        class GradeTooLowException : public std::exception{
            public : 
                const char* what() const throw();
                /*{
                    return ("Grade To Low !");
                }*/
        };
};

std::ostream& operator << (std::ostream& output, const Bureaucrat& obj);


#endif