#ifndef  RPN_HPP
#define  RPN_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <stack>
#include <cstdlib>



enum charType {
    Space,
    Operator,
    Digit,
    Error
};

class RPN{
    public:
        RPN(char* str);
        RPN(const RPN& obj);
        ~RPN();

        RPN &operator=(const RPN& obj);
        float   result();

    class     wrongOperationException : public std::exception{
        public :
            const char * what() const throw() {
                return ("Ops : Wrong operation !");
            }
    };

    class zeroDivisionException : public std::exception{
        public :
            const char * what() const throw() {
                return ("Ops : Division by zero !");
            }
    };

    class wrongFormatException : public std::exception{
        public :
            const char * what() const throw() {
                return ("Ops : wrong argument format !");
            }
    };

    class notEnoughParamsException : public std::exception{
        public :
            const char * what() const throw() {
                return ("Ops : Not enough params (format should contains at lest two numbers and one operator) !");
            }
    };

    class   unkownOperatorException : public std::exception{
        public :
            const char * what() const throw() {
                return ("Ops : Unkown operator!");
            }
    };

    private:
        std::stack<float> _dataStack;
        int     determineType(char c);
        float   calculation(float &a, float &b, char op);
};

#endif