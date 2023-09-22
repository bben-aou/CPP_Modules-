/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:49:39 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:09:39 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     WRONGANIMAL_HPP
# define    WRONGANIMAL_HPP

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


class WrongAnimal{
    protected   :
        std::string  type;
    public      :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& obj);
        virtual ~WrongAnimal();

        WrongAnimal& operator = (const WrongAnimal& obj);

        std::string    getType()    const ;
        void           makeSound()  const ;
};
#endif