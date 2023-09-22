/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:27:20 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 12:27:00 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   SCALAR_HPP
# define  SCALAR_HPP

# include <iostream>
# include <limits>
# include <fstream>

#define RED   "\033[31m"
#define GRN   "\033[32m"
#define YEL   "\033[33m"
#define BLU   "\033[34m"
#define MAG   "\033[35m"
#define CYN   "\033[36m"
#define WHT   "\033[37m"
#define RESET "\033[0m"

enum    e_type {None, Int, Float, Char, Double, Literals};

class  Scalar{
    private :
    std::string     _str;
    int             _intValue ;
    char            _charValue;
    float           _floatValue;
    double          _doubleValue;
    
    e_type      _type;
    
    bool    _impossible;

    public  :
        Scalar();
        Scalar(const Scalar& obj);
        ~Scalar();

        Scalar& operator = (const Scalar& obj);

        //^   setters :
        
        void    setStr(std::string str);
        void    setChar(char c);
        void    setInt(int i);
        void    setFloat(float f);
        void    setDouble(double d);

        void    setType(void);

        //^  getters :

        std::string     getStr( void )    const;
        char            getChar( void )   const;
        int             getInt( void )    const;
        float           getFloat( void )  const;
        double          getDouble( void ) const;
        
        e_type          getType( void ) const;
        
        void    convert( void );

        //^     checkers : 
        
        bool    isChar( void )       const;
        bool    isInt( void )        const;
        bool    isFloat( void )      const;
        bool    isDouble( void )     const;
        bool    isImpossible( void );
        bool    isLiterals( void )   const;
        
        //^    printers :
        
        void    printChar(void)   const;
        void    printInt(void)    const;
        void    printFloat(void)  const;
        void    printDouble(void) const;

        //^   exception :

        class  uknownTypeException : public std::exception{
            public  :
                const char* what() const throw();
        };
};

std::ostream& operator << (std::ostream& output , const Scalar& obj);

#endif