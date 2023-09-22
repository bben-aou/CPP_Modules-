/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:28:59 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 08:47:38 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

template<typename T>
void    print(const T& arr, size_t i){
    (void)i;
    std::cout << arr << std::endl;
}

template<typename T>
void    printWithIndex(const T& arr, size_t i){
        std::cout << "arr[" << i << "] = " << arr << std::endl;
}

template<typename T>
void    iter(T* arr, size_t len,void(*f)(const T&, size_t i)){
    for (size_t i = 0; i < len ; i++)
        (*f)(arr[i], i);
}

