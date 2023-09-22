/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:36:50 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 08:47:28 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

#include <sstream>

template <typename T>
void    swap(T& a, T&b){
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T >
const T&  min(const T& a, const T& b){
    if (a > b)
        return (b);
    else if (a == b)
        return (b);
    else
        return (a);
}

template <typename T>
const T& max(const T& a, const T& b){
    if (a > b)
        return (a);
    else if (a == b)
        return (b);
    else
        return (b);
}