#ifndef     BITCOINEXCHANE_HPP
#define     BITCOINEXCHANE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <ctime>
#include <cstdlib>

class BitcoinExchange{
    private :
        std::map<std::string, float>    _dataMap;
        std::string                     _date;
        void                            checkAndStoreData(std::string file);
        void                            checkDateFormat(std::string);
        float                           checkValueValidation(std::string value);
        std::string                     exchangeCalculation(std::string line);
    public :
        BitcoinExchange();
        BitcoinExchange(char *inputFile);
        BitcoinExchange(const BitcoinExchange& obj);
        ~BitcoinExchange();

        BitcoinExchange  &operator = (const BitcoinExchange& obj);

class exceptionDataFileExistence : public std::exception{
    public :
        const char* what() const throw(){
            return "data.csv file doesn't exist !";
        }
};

class exceptionInputFileExistence : public std::exception{
    public :
        const char* what() const throw(){
            return ("Ops Check if the file exist !");
        }
};

class exceptionEmptyInputFile : public std::exception{
    public :
        const char* what() const throw(){
            return ("Ops empty input file");
        }
};

class exceptionDataFormat : public std::exception{
    public :
        const char* what() const throw(){
            return ("bad syntax of data file !!");
        }
};

class exceptionDateFormat : public std::exception{
    public :
        const char* what() const throw(){
            return ("invalid date format (Year-Month-Day)");
        }
};

class exceptionInputFormat : public std::exception{
    public :
        const char* what() const throw(){
            return ("Date format should be date | value");
        }
};

class exceptionNegativeValue : public std::exception{
    public :
        const char* what() const throw(){
            return ("Ops valid value must be positive integer !");
        }
};

class exceptionToHighValue : public std::exception{
    public :
        const char* what() const throw(){
            return ("Ops valid value must be <= 1000 !");
        }
};

class exceptionValueValidFormat : public std::exception{
    public :
        const  char* what() const throw(){
            return ("invalid value format !");
        }
};

};




#endif