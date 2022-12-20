/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:01:57 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/20 17:38:31 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool Signed;
		const int gtoSign;
		const int gtoExecute;
	public:
		// Constructors
		Form();
		Form(const std::string Name,const int GtoSign, const int GtoExecute);
		Form(const Form &copy);
		
		// Destructor
		~Form();

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw(){
					return ("Grade Too Low");
				}
		}	;
	
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw(){
					return ("Grade Too High");
				}
		}	;	
		
		// Operators
		Form & operator=(const Form &assign);
		std::string  getName(void) const;
		int getGtoSign(void) const;
		int getGtoExecute(void) const;
		bool  getSigned(void) const;
		void beSigned(const class Bureaucrat &Bu);
				
};

std::ostream& operator<<(std::ostream& os, const Form& b);

#endif