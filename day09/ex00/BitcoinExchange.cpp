/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:42 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/15 04:00:20 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	std::cerr << "Error: " << std::endl; 
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	this->file = file;
	readStoreDatabase();
	readStoreInput();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void) copy;
}

int BitcoinExchange::readStoreDatabase()
{
	std::ifstream infile("data.csv");
	std::stringstream ss;

	if (!infile.good())
	{
		std::cerr << "Error: could not open database file" << std::endl;
		return 1;
	}
	ss << infile.rdbuf();
	infile.close();
	DataBase = ss.str();
	
	std::string h;
	size_t f;
	while(1)
	{
		f = DataBase.find("\n");
		if (f != std::string::npos)
		{
			h = DataBase.substr(0, f);
			DataBase = DataBase.substr(f + 1);
			traetLine(h);
		}
		else
			break;
	}
	return 0;
}

int BitcoinExchange::traetLine(std::string line)
{
	if (line.empty())
		return 0;
	size_t coma = line.find(",");
	db[line.substr(0, coma)] = line.substr(coma + 1);
	return 0;
}

void BitcoinExchange::myTrim(std::string &s, const std::string &toTrim = " \t\f\v\n\r")
{
	if (s.find_first_not_of(toTrim) > s.length())
	{
		s.clear();
		return;
	}
	s = s.substr(s.find_first_not_of(toTrim), s.length());
	s = s.substr(0, s.find_last_not_of(toTrim) + 1);
}

int BitcoinExchange::traetInputLine(std::string line)
{
	std::string date;
	std::string value;
	size_t f;
	f = line.find("|");
	if (f == std::string::npos)
	{
		// std::cout << "Error: bad input" << " => " << line << std::endl;	
		date = line;
	}
	else
	{
		date = line.substr(0,f);
		value = line.substr(f + 1);
		if (!date.empty())
			myTrim(date);
		if (!value.empty())
			myTrim(value);
	}
	
	// input[date] = value;
	if (date != "date")
		getBtcValue(date ,value ,line);
	
	
	return (1);
}

int checkInt(std::string s)
{
	char c;
	for (size_t i = 0; i < s.length() ; i++)
	{
		c = s.at(i);
		if (!isnumber(c) && c != '.' && c != '-')
			return(1);
	}
	return (0);	
}

int checkValue(std::string value , std::string line)
{
	long long num = atof(value.c_str());
	if (checkInt(value))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return 1;
	}
	else if (num < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 1;
	}
	else if (num > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return 1;
	}
	return 0;
}

int checkValidDate(std::string date, std::string value,std::string line)
{
	if (date.length() != 10 || checkInt(date) || date.find("-") != 4 || date.find_last_of("-") != 7)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return 1;
	}
	else
	{
		std::string y = date.substr(0,4);
		std::string m = date.substr(5,2);
		std::string d = date.substr(8,2);
		if (atol(m.c_str()) < 0 || atol(m.c_str()) > 12 || atol(d.c_str()) < 0 || \
		atol(d.c_str()) > 31 ||  atol(y.c_str()) < 0 )
		{
			std::cout << "Error: date is not valid => " << date << std::endl;
			return 1;
		}
		else
		{
			if (checkValue(value, line));
			else
				std::cout << "Error: date is does not exist in database" << std::endl;
			return 1;
		}
	}
	return 0;
}

void BitcoinExchange::getBtcValue(std::string date ,std::string value ,std::string line)
{
	if (date.empty() || value.empty())
		std::cout << "Error: bad input => " << line << std::endl;
	else
	{
		if(db.find(date) != db.end())
		{	if (checkValue(value, line));
			else
				std::cout << date << " => " << value << " = " << atof(value.c_str()) * atof(db[date].c_str()) << std::endl;
		}
		else
		{
			if (checkValidDate(date, value, line) || checkValue(value, line));
			else
				std::cout << "Error: some other error " << line << std::endl;
		}
	}
}

int BitcoinExchange::readStoreInput()
{
	if (open_file())
		return 1;

	std::string line;
	size_t f;
	while(1)
	{
		f = inputFile.find("\n");
		if (f != std::string::npos)
		{
			line = inputFile.substr(0, f);
			inputFile = inputFile.substr(f + 1);
			traetInputLine(line);
		}
		else
			break;
	}
	return 0;
}

int BitcoinExchange::open_file()
{
	std::ifstream infile(file);
	std::stringstream ss;

	if (!infile.good())
	{
		std::cout << "Error: Failed to open file" << std::endl;
		return 1;
	}
	ss << infile.rdbuf();
	infile.close();
	inputFile = ss.str();
	return 0;
}

// Destructor
BitcoinExchange::~BitcoinExchange()
{
}


// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void) assign;
	return *this;
}

