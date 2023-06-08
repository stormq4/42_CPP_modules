#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) { *this = ref; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref) {
	this->_dataBase = ref._dataBase;
	return *this;
}

BitcoinExchange::BitcoinExchange(const std::string &input) {
	std::string dataBaseFileName("data.csv");
	this->setupDataBase(dataBaseFileName);
	this->handleInput(input);
    (void)input;
}

void	BitcoinExchange::setupDataBase(const std::string &csvData) {
	std::ifstream	readCsv(csvData.c_str());
	std::string 	line;
	std::string		delim;

	getline(readCsv, line);
	while (getline(readCsv, line)) {
		std::stringstream ss(line);
		getline(ss, delim, ',');
		std::string key = delim;
        getline(ss, delim);
		this->setDataBaseValue(key, delim);
	}
}

void	BitcoinExchange::handleInput(const std::string &input) {
	std::ifstream	read(input);
	std::string 	rline;

	getline(read, rline);
	while (getline(read, rline)) {
		if (rline.empty()) {
			std::cerr << "Error: Bad input => " << rline;
			continue;
		}
		std::stringstream	ss(rline);
		std::string			date;
		getline(ss, date, '|');
        if (date.empty()) {
            std::cerr << "Error: Bad input => " << rline << std::endl;
            continue;
        }
        if (date.length() != 11) {
            std::cerr << "Error: Bad input => " << date << std::endl;
            continue;
        }
        date = date.substr(0, date.length() - 1);
        if (!this->checkDate(date)) {
            std::cerr << "Error: Bad input => " << date << std::endl;
            continue;
        }
        std::string			multiply;
        getline(ss, multiply);
		// if (multiply.empty() || multiply[0] != ' ') {
		// 	std::cout << "Error: Bad Input => " << rline << std::endl;
		// 	continue;
		// }
		
		// for (size_t i = 1; i < multiply.size(); i++) {
		// 	if (multiply[i] != '.' || !isdigit(multiply[i])) {
		// 		std::cout << "Error: Bad Input => " << rline << std::endl;
		// 		continue;
		// 	}
		// }
		if (!checkFloat(multiply)) {
			std::cout << "Error: Bad Input => " << rline << std::endl;
			continue;
		}

        float				multiplyFloat = std::stof(multiply);
        if (multiplyFloat < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        else if (multiplyFloat > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        float				value = this->lowerBound(date);
        multiplyFloat *= value;
        std::cout << date << " =>" << multiply << " = " << multiplyFloat << std::endl;
	}
}

float BitcoinExchange::lowerBound(std::string key) {
    std::string value;
    if (_dataBase.find(key) != _dataBase.end())
        value = _dataBase[key];
    else {
        std::map<std::string, std::string>::iterator it = _dataBase.begin();
        std::map<std::string, std::string>::iterator fIt = _dataBase.begin();
        ++it;
        for (; it != _dataBase.end(); ++it) {
            if (it->first > key) {
                value = fIt->second;
                break;
            }
            fIt = it;
        }
    }
    return std::stof(value);
}

bool    BitcoinExchange::checkDate(const std::string &date) {
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    if (date[0] < '0' || date[0] > '9' || date[1] < '0' || date[1] > '9' || date[2] < '0' || date[2] > '9' || date[3] < '0' || date[3] > '9')
        return false;
    if (date[5] < '0' || date[5] > '1' || date[6] < '0' || date[6] > '9')
        return false;
    if (date[5] == '1' && (date[6] < '0' || date[6] > '2'))
        return false;
    if (date[8] < '0' || date[8] > '3'  || date[9] < '0' || date[9] > '9')
        return false;
    if (date[8] == '3' && (date[9] < '0' || date[9] > '1'))
        return false;
    if (date[5] == '0' && date[6] == '2' && date[8] == '3')
        return false;
    if (date[5] == '0' && date[6] == '2' && date[8] == '2' && date[9] == '9' && atoi(date.substr(0, 4).c_str()) % 4 != 0)
        return false;
    if (date[5] == '0' && date[6] == '2' && date[8] == '2' && date[9] == '8' && atoi(date.substr(0, 4).c_str()) % 4 == 0)
        return false;
    if(date[6] == '4' || date[6] == '6' || date[6] == '9' || (date[5] == '1' && date[6] == '1'))
        if (date[8] == '3' && date[9] == '1')
            return false;
    return true;
}

void		BitcoinExchange::setDataBaseValue(const std::string &key, const std::string &value) {
	this->_dataBase[key] = value;
}

bool checkFloat(std::string multiply) {
	if (multiply.empty() || multiply[0] != ' ') {
		return false;
	}
	bool dotCheck = true;
	bool minCheck = true;
	for (size_t i = 1; i < multiply.size(); i++) {
		if (multiply[i] == '.') {
			if (dotCheck == false)
				return false;
			else 
				dotCheck = false;
		}
		else if (multiply[i] == '-') {
			if (minCheck == false)
				return false;
			else
				minCheck = false;
		}
		else if (!isdigit(multiply[i]))
			return false;
	}
	return true;
}
