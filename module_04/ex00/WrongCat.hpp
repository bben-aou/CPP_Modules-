/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:32:41 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 09:00:22 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public  :
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& obj);
        ~WrongCat();

        WrongCat& operator = (const WrongCat& obj);

        void    makeSound() const;  
};
