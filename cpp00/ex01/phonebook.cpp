/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:55:51 by zait-sli          #+#    #+#             */
/*   Updated: 2022/06/26 04:41:53 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string.h>

class contact
{
	public :
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
		int		id;
};

class PhoneBook
{
	public :
		contact info[8];
};

int i = 0, n = 0;


void	get_info(contact *info,int i)
{
	if (i == 8)
		i = 0;
	info[i].id = i + 1;
	std::cout << "Enter first name : ";
	std::getline(std::cin,info[i].first_name);
	std::cout << "Enter last name : ";
	std::getline(std::cin,info[i].last_name);
	std::cout << "Enter nickname : ";
	std::getline(std::cin,info[i].nickname);
	std::cout << "Enter phone number : ";
	std::getline(std::cin,info[i].phone_number);
	std::cout << "Enter darkest secret : ";
	std::getline(std::cin,info[i].darkest_secret);
}

void	print_data(std::string s)
{
	int b = 0, c = 0;
	if (strlen(s.c_str()) > 10)
		std::cout << s.substr(0,9) << ".|";
	else
	{
		b = strlen(s.c_str());
		std::cout << s ;
		while(c < 10 - b)
		{
			std::cout << " ";
			c++;
		}
		std::cout << "|" ;
	}
}

void print_all(contact info)
{
	std::cout << "|";
	std::cout << "    ";
	std::cout << info.id;
	std::cout << "     |";
	print_data(info.first_name);
	print_data(info.last_name);
	print_data(info.nickname);
	std::cout << "\n";
}

void handle_search(contact *info)
{
	int x = 0;
	int input;

	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|  Index   |  F.name  |  L.name  | Nickname |\n";
	std::cout << "+----------+----------+----------+----------+\n";
	while(x < n)
	{
		
		print_all(info[x]);
		std::cout << "+----------+----------+----------+----------+\n";
		x++;
	}

	std::cout << "Which contact : ";	
	std::cin >> input ;
	if (input > 0 && input < n + 1)
	{
		std::cout << "+----------+----------+----------+----------+\n";
		print_all(info[input - 1]);
		std::cout << "+----------+----------+----------+----------+\n";
	}
	else
		std::cout << "Ivalid Index\n";
}

int main()
{
	std::string input;
	PhoneBook phbook;

	while(1)
	{
		std::cout << "Enter your cammand : ";
		
		if (!std::getline(std::cin,input))
			exit(0);
		if (!strcmp(input.c_str(), "ADD") || !strcmp(input.c_str(), "add"))
		{
			get_info(phbook.info,i);
			i++;
			if (n < 8)
				n++;
		}
		else if (!strcmp(input.c_str(), "SEARCH") || !strcmp(input.c_str(), "search"))
			handle_search(phbook.info);
		else if (!strcmp(input.c_str(), "EXIT") || !strcmp(input.c_str(), "exit"))
			exit(0);
		else
			std::cout << "INVALID Cammand\n";
	}
}