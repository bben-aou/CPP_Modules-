#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char* inputFile){
    std::ifstream    iFile;
    std::string     line;
    int             next = 0;

    checkAndStoreData("data.csv");
    iFile.open(inputFile);
    if (!iFile)
        throw exceptionInputFileExistence();
    if (iFile.peek() == std::ifstream::traits_type::eof())
        throw exceptionEmptyInputFile();
    while (getline(iFile, line)){
        if ((next > 0 && !line.empty()) || (next == 0 && isdigit(line[0]))){
           try {
                exchangeCalculation(line);
            }
            catch (std::exception& e) {
                std::cerr << "Error : " << _date << ": " << e.what() << std::endl;
            }
        }
        next++;
    }
    iFile.close();
}

BitcoinExchange::~BitcoinExchange(){

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
    *this = obj;
}

void    BitcoinExchange::checkAndStoreData(std::string file){
    std::ifstream   data;
    std::string     line;
    std::string     date;
    int             i = 0;
    int             position;
    float           exchangingRate;

    data.open(file.c_str());
    if (!data)
        throw exceptionDataFileExistence();
    while (getline(data, line)){
        if (i != 0 || (i == 0 && isdigit(line[0]))){
            position = line.find(",");
            if (position != 10)
                throw  exceptionDataFormat();
            date = line.substr(0, 10);
            checkDateFormat(date);
            line.erase(0,11);
            exchangingRate = checkValueValidation(line);
            this->_dataMap.insert(std::pair<std::string, float>(date, exchangingRate));
        }
        i++;
    }
    data.close();
}

void    BitcoinExchange::checkDateFormat(std::string date){
    struct tm   time;
    int         i = 0;
    std::string::iterator   it;

    if (!strptime(date.c_str(), "%Y-%m-%d", &time))
        throw exceptionDateFormat();
    for (it = date.begin(); it != date.end(); ++it){
        if (i != 4 && i != 7  && !isdigit(*it))
            throw exceptionDateFormat();
        i++;
    }
}

float   BitcoinExchange::checkValueValidation(std::string value){
    float   fValue;
    std::string::iterator it;

    for(it = value.begin(); it != value.end(); ++it){
        if (!(isdigit(*it) || *it == '.' || (it == value.begin() && *it == '-')))
            throw exceptionValueValidFormat();
    }
    fValue = atof(value.c_str());
    return (fValue);
}

std::string  BitcoinExchange::exchangeCalculation(std::string line){
    std::map<std::string, float>::iterator  it;
    int                                     position;
    float                                   value;

    this->_date = line.substr(0,10);
    position = line.find(" | ");
    if (position != 10)
        throw exceptionInputFormat();
    line.erase(0,13);
    checkDateFormat(this->_date);
    value = checkValueValidation(line);
    if (value < 0)
        throw exceptionNegativeValue();
    else if (value > 1000)
        throw exceptionToHighValue();
    it = _dataMap.lower_bound(_date);
    if (it == _dataMap.end() || it == _dataMap.begin()){
        std::cout << "Date Not found on the DataBase !" << std::endl;
    }
    else{
        it--;
        std::cout << _date << " => " << value << " = " << value * it->second << std::endl;
    }
    return (_date);
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj){
    this->_date = obj._date;
    this->_dataMap.insert(obj._dataMap.begin(), obj._dataMap.end());
    return *this;
}