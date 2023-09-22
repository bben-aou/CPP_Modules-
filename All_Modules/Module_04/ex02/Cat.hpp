/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:51:29 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:01:12 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
        private :
            Brain *brain;
        public  :
            Cat()                  ;
            Cat(std::string  type) ;
            Cat(const Cat& obj)    ;
            ~Cat()                 ;

            virtual void    makeSound() const   ;
            Brain*          getBrain()  const   ;
            Cat&    operator = (const Cat& obj) ;           
};
