/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:41:47 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/16 16:49:00 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <map>


typedef struct t_date
{
	std::string y;
	std::string m;
	std::string d;
} s_date;

class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(std::string file);
		BitcoinExchange(const BitcoinExchange &copy);

		// Member functions
		int open_file();
		int readStoreDatabase();
		int readStoreInput();
		int traetLine(std::string h);
		void myTrim(std::string &s, const std::string &);
		int traetInputLine(std::string line);
		void getBtcValue(std::string date, std::string value , std::string line);
		// int checkValue(std::string value)

		// Destructor
		~BitcoinExchange();
		
		// Operators
		BitcoinExchange & operator=(const BitcoinExchange &assign);
		
	private:
		std::string file;
		std::string nDate;
		std::string DataBase; 
		std::string inputFile; 
		std::map<std::string, std::string> db;
		std::map<std::string, std::string>::iterator it;
};

#endif