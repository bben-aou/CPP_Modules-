#include "RPN.hpp"


RPN::RPN(char* str){
    int     type;
    float   v1, v2;
    char    tmp[2];
    int     i;

    tmp[1] = '\0';
    for (i = 0; str[i] != '\0' ; i++){
        type = determineType(str[i]);
        if (type == Digit){
            tmp[0] = str[i];
            _dataStack.push(atof(tmp));
        }
        else if (type == Operator){
            if (_dataStack.size() < 2)
                throw wrongOperationException();
            v2 = _dataStack.top();
            _dataStack.pop();
            v1 = _dataStack.top();
            _dataStack.pop();
            try
            {
                // float rslt = ;
                _dataStack.push(calculation(v1, v2, str[i]));
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        else if (type == Error)
            throw wrongFormatException();
    }
    if (_dataStack.size() > 1 || strlen(str) < 2)
        throw notEnoughParamsException();
}


int RPN::determineType(char c){
    char    digits[10]    = {'0','1','2','3','4','5','6','7','8','9'};
    char    operators[4] = {'+', '-', '*', '/'};
    int i = 0;

    for (i = 0 ; i < 10 ; i++){
        if (c == digits[i])
            return Digit;
    }
    i = 0;
    for (i = 0; i < 4 ; i++){
        if (c == operators[i])
            return Operator;
    }
    if (isspace(c) != 0)
        return Space;
    return (Error);
}

float RPN::calculation(float &a, float &b, char op){
    if (op == '*')
        return (a * b);
    else if (op == '+')
        return (a + b);
    else if (op == '-')
        return (a - b);
    // else
    else if (op == '/'){
        if ( b == 0)
            throw zeroDivisionException();
        else 
            return (a / b);
    }
    else
        throw unkownOperatorException();
}

float RPN::result() {
    return (_dataStack.top());
}


RPN::RPN(const RPN &obj){
    *this = obj;
}

RPN::~RPN(){

}

RPN &RPN::operator=(const RPN &obj){
    _dataStack = obj._dataStack;
    return *this;
}