/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:28 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:11:59 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
        private :
            Brain *brain;
        public  :
            Dog()                  ;
            Dog(std::string  type) ;
            Dog(const Dog& obj)    ;
            ~Dog()                 ;

            virtual void    makeSound() const   ;
            Brain*          getBrain()  const   ;
            Dog&    operator = (const Dog& obj) ;           
};
