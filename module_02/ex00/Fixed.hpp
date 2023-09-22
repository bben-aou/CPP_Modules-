/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:35:38 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/14 12:18:47 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   FIXED_H
# define  FIXED_H

# include <iostream>


# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define RESET "\033[0m"


class   Fixed{
        private :
            int                 fixedPoint;
            static const int    fractionalBits = 8;
        public :
            Fixed();
            Fixed(const Fixed&);
            ~Fixed();
            Fixed&  operator=(const Fixed& obj);
            
            int     getRawBits(void) const     ;
            void    setRawBits(int  const raw) ;   
};

#endif