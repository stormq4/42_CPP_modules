#include <string>
#include <iostream>
#include <map>
#include <ctime>
#include <sstream>
#include <fstream>
#include <iomanip>

class BitcoinExchange {

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange( const BitcoinExchange &ref );
		BitcoinExchange &operator=( const BitcoinExchange &ref );

		BitcoinExchange(const std::string &input);

		void		setupDataBase(const std::string &csvData);
        bool        checkDate(const std::string &date);
		void		handleInput(const std::string &input);

		std::time_t								dateFromString(const std::string &stringDate);
		float									lowerBound(std::string date);
		void									setDataBaseValue(const std::string &key, const std::string &value);
	private:
		std::map<std::string, std::string>				_dataBase;
};

bool isEarlier(const std::tm& tm1, const std::tm& tm2);
