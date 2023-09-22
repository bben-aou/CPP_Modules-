/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:14:51 by virsnp00x         #+#    #+#             */
/*   Updated: 2023/01/02 08:54:59 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

template<typename T>
class Array{
    private :
        unsigned int    _size;
        T*              _array;
    public  :
        Array() : _size(0), _array(new T[0]){};
        Array(unsigned int n) : _size(n), _array(new T[n]){};
        Array(const Array& obj){
            this->_size = obj._size;
            this->_array = new T[obj._size];
            for (unsigned int i = 0; i < obj._size ; i++)
                this->_array[i] = obj._array[i];
        }

        ~Array(){
            delete [] this->_array; 
        }

        Array& operator = (const Array& obj){
            this->~Array();
            this->_size = new T[obj._size];
            for (unsigned int i = 0; i < obj._size ; i++)
                this->_array[i] = obj._array[i];
            return *this;
        }
        
        T& operator [](unsigned int index){
            if (index >= this->_size)
                throw OutOfRangeException();
		    return this->_array[index];
        }
        
        unsigned int size()
	    {
		    return this->_size;
	    }

     	class OutOfRangeException : public std::exception{
            public  :
            const char* what() const throw(){
                return ("Element is out of range of array !");
            }
        };
};
