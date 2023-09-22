/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:33:09 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 11:47:01 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

class  ElementNotFoundException : public std::exception{
    public  :
        const char* what() const throw(){
            return ("Element Not Found !");
        }
};

template <class T>
typename T::iterator    easyfind(T& container, int toFind){
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
        return it;
    else
        throw ElementNotFoundException();
}   
