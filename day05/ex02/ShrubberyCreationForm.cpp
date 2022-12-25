/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:28:57 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/22 10:28:57 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreation", 145,137)
{
	this->target = target;
	std::cout << "\e[0;33mString Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->target = assign.target;
	return *this;
}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string name;
	std::FILE * pFile;
	if(getSigned() && executor.getGrade() <= getGtoExecute())
	{
		name = target + "_shrubbery";
		pFile = fopen (name.c_str(),"w");
		std::ofstream file(name);
		file << "         /*\\\n";
		file << "        /***\\\n";
		file << "       /*****\\\n";
		file << "      /*******\\\n";
		file << "     /*********\\\n";
		file << "    /***********\\\n";
		file << "   /*************\\\n";
		file << "  /***************\\\n";
		file << " /*****************\\\n";
		file << "/*******************\\\n";
		file << "---------------------\n";
		file << "         |*|\n";
		file << "         |*|\n";
		file << "         |*|\n";
		file << "     |*********|\n";
		file << "     |---------|\n";
		file.close();
	}
}