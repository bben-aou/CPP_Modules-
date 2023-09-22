/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:27:07 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/24 10:01:16 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   BRAIN_HPP
# define  BRAIN_HPP

# include <iostream>

# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define RESET "\033[0m"

class Brain{
    private :
        std::string ideas[100];
    public  :
        Brain() ;
        Brain(const Brain& obj) ;
        ~Brain() ;

        const   std::string&     getIdea(int index ) const;

        Brain& operator = (const Brain& obj);
};

#endif