/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:49:19 by virsnp00x         #+#    #+#             */
/*   Updated: 2022/12/31 12:30:14 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(){
    this->_charValue   = '\0';
    this->_intValue    = 0;
    this->_floatValue  = 0.0f;
    this->_doubleValue = 0.0;
    std::cout << MAG "Scalar() Constructor has been called !!" RESET << std::endl;
}

Scalar::Scalar(const Scalar& obj){
    this->_charValue   = obj._charValue ;
    this->_intValue    = obj._intValue;
    this->_floatValue  = obj._floatValue;
    this->_doubleValue = obj._doubleValue;
    std::cout << MAG "Scalar(obj) Copy Constructor has been called !!" RESET << std::endl;
}

Scalar::~Scalar(){
    std::cout << RED "~Scalar() destructor has been called !!" RESET << std::endl;
}

Scalar& Scalar::operator = (const Scalar& obj){
    this->_intValue    = obj.getInt();
    this->_floatValue  = obj.getFloat();
    this->_doubleValue = obj.getDouble();
    return (*this);
}

void    Scalar::setChar(char c){
    this->_charValue = c;
}

void    Scalar::setInt(int i){
    this->_intValue = i;
}

void   Scalar::setFloat(float f){
    this->_floatValue = f;
}

void    Scalar::setDouble(double d){
    this->_doubleValue = d;
}


char    Scalar::getChar(void) const{
    return (this->_charValue);
}

int     Scalar::getInt(void)    const{
    return(this->_intValue);
}

float   Scalar::getFloat(void)  const{
    return (this->_floatValue);
}

double  Scalar::getDouble(void) const{
    return (this->_doubleValue);
}

bool    Scalar::isChar(void) const{
    if ((_str.length() == 1) && std::isalpha(_str[0]) && std::isprint(_str[0]))
        return (true);
    else
        return (false);
}

bool    Scalar::isInt(void) const{
    int i   = 0;
    int len = static_cast<int>(_str.length());
     
    if (_str[i] == '+' || _str[i] == '-')
        i++;
    for ( int j = i ; j < len ; j++){
        if (!std::isdigit(_str[j]))
            return (false);
    }
    return (true);
}

bool    Scalar::isFloat(void) const{
    if (_str.find('.') == std::string::npos || _str.back() != 'f' || _str.find('.') == 0 || _str.find('.') == _str.length() - 2)
        return (false);
    int i = 0;
    int pointFound = 0;
    int len = static_cast<int>(_str.length() - 1);
    if (_str[i] == '+' || _str[i] == '-')
        i++;
    for( int j = i ; j < len ; j++){
        if (_str[j] == '.')
            pointFound++;
        if ((!std::isdigit(_str[j]) && _str[j] != '.') || pointFound > 1)
            return (false);
    }
    return (true);
}

bool    Scalar::isDouble(void)  const{
    if (_str.find('.') == std::string::npos || _str.find('.') == 0 || _str.find('.') == _str.length() - 1)
        return (false);
    int i = 0;
    int pointFound = 0;
    int len = static_cast<int>(_str.length() - 1) ;
    if (_str[i] == '+' || _str[i] == '-')
        i++;
    for( int j = i ; j < len ; j++){
        if (_str[j] == '.')
            pointFound++;
        if ((!std::isdigit(_str[j]) && _str[j] != '.') || pointFound > 1)
            return (false);
    }
    return (true); 
}

bool    Scalar::isImpossible(void) {
    try{
        if (_type == Int)
            _intValue = std::stoi(_str);
        else if ( _type == Float)
            _floatValue = std::stof(_str);
        else if (_type == Double)
            _doubleValue = std::stod(_str);
    }
    catch(const std::exception& e){
        _impossible = true;
        return (true);
    }
    return(false);
}

bool    Scalar::isLiterals(void) const{
    if ((_impossible) || (_str.compare("nan") == 0) || (_str.compare("nanf") == 0)
        || ( _str.compare( "+inf" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) 
        || ( _str.compare( "-inf" ) == 0 ) || ( _str.compare( "-inff" ) == 0 ) 
        || ( _str.compare( "-inff" ) == 0 ) || ( _str.compare( "-inff" ) == 0 )  
        || ( _str.compare( "+inff" ) == 0 ) || ( _str.compare( "+inff" ) == 0 ) ){
            return (true);
        }
    return (false);
}


void    Scalar::setType(void) {
    if (isChar())
        _type = Char;
    else if (isInt())
        _type = Int;
    else if (isFloat())
        _type = Float;
    else if (isDouble())
        _type = Double;
    else if (isLiterals())
        _type = Literals;
    else
        _type = None;
}

e_type  Scalar::getType(void) const{
    return (this->_type);
}

const char* Scalar::uknownTypeException::what() const throw(){
    return ("Uknown Type !!");
}

void    Scalar::setStr(std::string str){
    this->_str = str;
    this->setType();
    if (getType() == None){
        throw Scalar::uknownTypeException();
    }
}

std::string Scalar::getStr(void) const{
    return (this->_str);
}

void    Scalar::convert(void) {
    if (isImpossible())
        return;
    switch (_type){
        case Char :
            _charValue    = _str[0];
            _intValue     = static_cast<int>(_charValue);
            _floatValue   = static_cast<float>(_charValue); 
            _doubleValue  = static_cast<double>(_charValue); 
            break;
        case Int :
            _intValue    = std::stoi(_str);
            _charValue   = static_cast<char>(_intValue);
            _floatValue  = static_cast<float>(_intValue);
            _doubleValue = static_cast<double>(_intValue);
            break;
        case Float  :
            _floatValue  = std::stof(_str);
            _charValue   = static_cast<char>(_floatValue);
            _intValue    = static_cast<int> (_floatValue);
            _doubleValue = static_cast<double>(_floatValue);
            break;
        case Double :
            _doubleValue = std::stod(_str);
            _charValue   = static_cast<char>(_doubleValue);
            _intValue    = static_cast<int>(_doubleValue) ;
            _floatValue  = static_cast<float>(_doubleValue);
            break;
        default :
            break;
    }
}

void    Scalar::printChar(void) const{
    if (this->isLiterals() || (!std::isprint(_intValue) && (_intValue >= 127))){
        std::cout << RED "Impossible" RESET;
    }
    else if (!std::isprint(this->_intValue))
        std::cout << YEL "Non Displayable !" RESET;
    else
        std::cout << "'" << getChar() << "'";
    std::cout << std::endl;
}

void    Scalar::printInt(void) const{
    if (this->isLiterals() || (!std::isprint(_intValue) && (_intValue >= 127))){
        std::cout << RED "Impossible" RESET ;
    }
    else{
        std::cout << getInt() ;
    }
    std::cout << std::endl;
}

void    Scalar::printFloat(void) const{
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 )
        std::cout << "nanf";
    else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 )
        std::cout << "+inff";
    else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 )
        std::cout << "-inff";
    else if (_impossible)
        std::cout << RED "Impossible" RESET;
    else{
        if (_floatValue - static_cast<int>(_floatValue) == 0)
            std::cout << _floatValue << ".0f";
        else
            std::cout << getFloat() << "f";
    }
    std::cout << std::endl;
}

void    Scalar::printDouble(void) const{
    if ( _str.compare( "nan" ) == 0 || _str.compare( "nanf" ) == 0 )
        std::cout << YEL "nanf" RESET;
    else if ( _str.compare( "+inff" ) == 0 || _str.compare( "+inf" ) == 0 )
        std::cout << YEL "+inff" RESET;
    else if ( _str.compare( "-inff" ) == 0 || _str.compare( "-inf" ) == 0 )
        std::cout << YEL "-inff" RESET;
    else if (_impossible)
        std::cout << RED "Impossible" RESET;
    else{
        if (_doubleValue - static_cast<int>(_doubleValue) == 0)
            std::cout << _doubleValue << ".0" ;
        else
            std::cout << getDouble() << "f";
    }
    std::cout << std::endl;
}

std::ostream&  operator << (std::ostream& output, const Scalar& obj){
    output << YEL "char   : " RESET ; obj.printChar();
    output << YEL "int    : " RESET ; obj.printInt();
    output << YEL "float  : " RESET ; obj.printFloat();
    output << YEL "double : " RESET ; obj.printDouble();
    return output;
}