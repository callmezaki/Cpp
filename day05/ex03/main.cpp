/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:15:46 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/25 20:41:23 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try 
	{
		Bureaucrat kayed("kayed",10);
		Intern in;
		std::cout << kayed << std::endl;
		Form *form;
		form = in.makeForm("robotomy r","house");
		form->beSigned(kayed);
		kayed.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}

