	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:15:46 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/19 22:34:05 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try 
	{
		Bureaucrat kayed("kayed",10);
		std::cout << kayed << std::endl;
		ShrubberyCreationForm g("hhhh");
		g.beSigned(kayed);
		std::cout << g << std::endl;
		g.execute(kayed);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try 
	{
		Bureaucrat kayed("kayed",10);
		std::cout << kayed << std::endl;
		PresidentialPardonForm g("hhhh");
		g.beSigned(kayed);
		std::cout << g << std::endl;
		g.execute(kayed);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try 
	{
		Bureaucrat kayed("kayed",10);
		std::cout << kayed << std::endl;
		RobotomyRequestForm g("hhhh");
		g.beSigned(kayed);
		std::cout << g << std::endl;
		kayed.executeForm(g);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

