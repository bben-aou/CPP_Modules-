/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:59:43 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:00:10 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
    public  :
        Dog();
        Dog(std::string type);
        Dog(const Dog& obj);
        ~Dog();

        Dog& operator = (const Dog& obj);

        void    makeSound() const;
};
