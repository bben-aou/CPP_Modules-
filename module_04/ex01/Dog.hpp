/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:28 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:00:45 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
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
