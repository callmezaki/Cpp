/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setters_getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:15:53 by zait-sli          #+#    #+#             */
/*   Updated: 2022/06/29 23:25:57 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string.h>
#include "phonebook.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string	Contact::get_first_name()
{
	return (first_name);
}
std::string	Contact::get_last_name()
{
	return (last_name);
}
std::string	Contact::get_nickname()
{
	return(nickname);
}
std::string	Contact::get_phone_number(){
	return(phone_number);	
}
std::string	Contact::get_darkest_secret(){
	return(darkest_secret);
}
int Contact::get_id(){
	return(id);
}
void	Contact::set_first_name(std::string	first_n){
	this->first_name = first_n;
}
void	Contact::set_last_name(std::string	last_name){
	this->last_name = last_name;
}
void	Contact::set_nickname(std::string	nickname){	
	this->nickname = nickname;
}
void	Contact::set_phone_number(std::string	phone_number){
	this->phone_number = phone_number;
}
void	Contact::set_darkest_secret(std::string	darkest_secret){
	this->darkest_secret = darkest_secret;
}
void	Contact::set_id(int idd){
	this->id = idd;
}

Contact 	*PhoneBook::get_info()
{
	return info;
}