/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:28:27 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:46:20 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ANIMAL_HPP
# define    ANIMAL_HPP

# include <iostream>
# include <string>

# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define RESET "\033[0m"


class Animal{
    protected   :
        std::string     type;
    public      :
        Animal()                  ;
        Animal(std::string type)  ;
        Animal(const Animal& obj) ;
        virtual ~Animal()         ;
        
        std::string     getType()   const ;
        virtual void    makeSound() const ;

        Animal& operator = (const Animal& obj);
};
#endif