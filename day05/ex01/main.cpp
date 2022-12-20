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

// #include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try 
	{
		Bureaucrat kayed("kayed",10);
		std::cout << kayed << std::endl;
		Form F("Extree",1,1);
		std::cout << F << std::endl;
		F.beSigned(kayed);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

