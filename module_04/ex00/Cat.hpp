/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:29:18 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:09:06 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal {
    public  :
        Cat();
        Cat(std::string type);
        Cat(const Cat& other);
        ~Cat();
        
        Cat& operator=(const Cat& obj);
        
        void    makeSound() const ;
};