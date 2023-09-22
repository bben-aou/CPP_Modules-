/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:28:27 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:00:14 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     AANIMAL_HPP
# define    AANIMAL_HPP

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

class AAnimal{
    protected   :
        std::string     type;
    public      :
        AAnimal()                  ;
        AAnimal(std::string type)  ;
        AAnimal(const AAnimal& obj) ;
        virtual ~AAnimal()         ;
        
        std::string     getType()   const ;
        virtual void    makeSound() const = 0;

        AAnimal& operator = (const AAnimal& obj);
};
#endif