/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:00:14 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 13:18:05 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     DATA_HPP
# define    DATA_HPP

# include <iostream>
# include <string>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"


typedef struct {
    std::string     firstName;
    std::string     lastName;
    std::string     userName;
    int             age;
    double          level;
} Data;

Data*       deserialize(uintptr_t raw);
uintptr_t   serialize(Data* ptr);
 
#endif