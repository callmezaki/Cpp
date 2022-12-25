/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 10:29:00 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/22 10:29:00 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target; 
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(const std::string &target);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		void  execute(Bureaucrat const & executor) const;
		
		
};

#endif