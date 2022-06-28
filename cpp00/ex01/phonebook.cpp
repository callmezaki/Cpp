/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:55:51 by zait-sli          #+#    #+#             */
/*   Updated: 2022/06/27 21:22:03 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string.h>

class Contact
{
	private :
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
		int		id;
	public :
		std::string	get_first_name()
		{
			return (first_name);
		}
		std::string	get_last_name()
		{
			return (last_name);
		}
		std::string	get_nickname()
		{
			return(nickname);
		}
		std::string	get_phone_number(){
			return(phone_number);	
		}
		std::string	get_darkest_secret(){
			return(darkest_secret);
		}
		int get_id(){
			return(id);
		}
		void	set_first_name(std::string	first_n){
			this->first_name = first_n;
		}
		void	set_last_name(std::string	last_name){
			this->last_name = last_name;
		}
		void	set_nickname(std::string	nickname){	
			this->nickname = nickname;
		}
		void	set_phone_number(std::string	phone_number){
			this->phone_number = phone_number;
		}
		void	set_darkest_secret(std::string	darkest_secret){
			this->darkest_secret = darkest_secret;
		}
		void	set_id(int idd){
			this->id = idd;
		}
};

class PhoneBook
{
	private :
		Contact info[8];
	public :
		Contact *get_info(){
			return(info);
		}
};

int i = 0, n = 0;

void	collect_info(Contact *info,int i)
{
	std::string tmp;
	if (i == 8)
		i = 0;
	info[i].set_id(i + 1);
	while(1)
	{
		std::cout << "Enter first name : ";
		std::getline(std::cin,tmp);
		info[i].set_first_name(tmp);
		if (tmp[0] != '\0')
			break ;
	}
	while(1)
	{
		std::cout << "Enter last name : ";
		std::getline(std::cin,tmp);
		info[i].set_last_name(tmp);
		if (tmp[0] != '\0')
			break ;
	}
	while(1)
	{
		std::cout << "Enter nickname : ";
		std::getline(std::cin,tmp);
		info[i].set_nickname(tmp);
		if (tmp[0] != '\0')
			break ;
	}
	while(1)
	{
		std::cout << "Enter phone number : ";
		std::getline(std::cin,tmp);
		info[i].set_phone_number(tmp);
		if (tmp[0] != '\0')
			break ;
	}
	while(1)
	{
		std::cout << "Enter darkest secret : ";
		std::getline(std::cin,tmp);
		info[i].set_darkest_secret(tmp);
		if (tmp[0] != '\0')
			break ;
	}
}

void	print_data(std::string s)
{
	int b = 0, c = 0;
	if (s.length() > 10)
		std::cout << s.substr(0,9) << ".|";
	else
	{
		b = strlen(s.data);
		std::cout << s ;
		while(c < 10 - b)
		{
			std::cout << " ";
			c++;
		}
		std::cout << "|" ;
	}
}

void print_all(Contact info)
{
	std::cout << "|";
	std::cout << "    ";
	std::cout << info.get_id();
	std::cout << "     |";
	print_data(info.get_first_name());
	print_data(info.get_last_name());
	print_data(info.get_nickname());
	std::cout << "\n";
}

void print_contact_info(Contact info)
{
	std::cout << "\n    First Name     : ";
	std::cout << info.get_first_name() << "\n";
	std::cout << "    Lastst Name    : ";
	std::cout << info.get_last_name() << "\n";
	std::cout << "    Nickname       : ";
	std::cout << info.get_nickname() << "\n";
	std::cout << "    Phone Number   : ";
	std::cout << info.get_phone_number() << "\n";
	std::cout << "    Darkest secret : ";
	std::cout << info.get_darkest_secret() << "\n\n";
}

void handle_search(Contact *info)
{
	int x = 0;
	int input;
	std::string in;

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
	if (!std::getline(std::cin,in))
		exit(0);
	// std::cin >> input ;
	input = atoi(in.c_str());
	if (input > 0 && input < n + 1)
	{
		print_contact_info(info[input - 1]);
		// std::cout << "+----------+----------+----------+----------+\n";
		// std::cout << "|  Index   |  F.name  |  L.name  | Nickname |\n";
		// std::cout << "+----------+----------+----------+----------+\n";
		// print_all(info[input - 1]);
		// std::cout << "+----------+----------+----------+----------+\n";
	}
	else
		std::cout << "Ivalid Index" << "\n";
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
		if (!input.compare("ADD") || !input.compare("add"))
		{
			collect_info(phbook.get_info(),i);
			i++;
			if (n < 8)
				n++;
		}
		else if (!input.compare("SEARCH") || !input.compare("search"))
			handle_search(phbook.get_info());
		else if (!input.compare("EXIT") || !input.compare("exit"))
			exit(0);
		else if (input[0] != '\0')
			std::cout << "INVALID Cammand\n";
	}
}