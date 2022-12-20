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

int main()
{
	try 
	{
		Bureaucrat Zack("Zack", 2);
		Zack.incrementGrade();
		std::cout << Zack << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try 
	{
		Bureaucrat jake("jake", 150);
		jake.decrementGrade();
		std::cout << jake.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try 
	{
		Bureaucrat Hmm("Hmm", 200);
		Hmm.incrementGrade();
		std::cout << Hmm.getGrade() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

