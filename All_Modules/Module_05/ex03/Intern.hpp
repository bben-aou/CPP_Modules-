/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virsnp00x <virsnp00x@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:37:06 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/28 12:40:50 by virsnp00x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern{
    public  :
        Intern()  ;
        ~Intern() ;
       class  InvalidFormException : public std::exception{
            public  :
                const char* what() const throw();
       };
        AForm*  makeForm(const std::string& fName, const std::string& target) const;
};